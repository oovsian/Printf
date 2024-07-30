/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oovsiann <oovsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 18:53:22 by oovsiann          #+#    #+#             */
/*   Updated: 2024/07/25 21:32:45 by oovsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_ptrlen(uintptr_t value)
{
	size_t	total;

	total = 0;
	if (value == 0)
		return (1);
	while (value)
	{
		total++;
		value /= 16;
	}
	return (total);
}

void	ft_putptr(uintptr_t num)
{
	if (num >= 16)
	{
		ft_putptr(num / 16);
		ft_putptr(num % 16);
	}
	else
	{
		if (num <= 9)
			ft_putchar(num + '0');
		else
			ft_putchar(num - 10 + 'a');
	}
}

int	ft_print_ptr(unsigned long long value)
{
	int	counter;

	counter = 0;
	if (value == 0)
		counter += write(1, "(nil)", 5);
	else
	{
		counter += write(1, "0x", 2);
		ft_putptr(value);
		counter += ft_ptrlen(value);
	}
	return (counter);
}

/*int	main(void)
{
	int	a;
	int	*b;
	int	i;

	a = 255;
	b = &a;
	i = ft_print_ptr((uintptr_t)b);
	printf("\nLa dirección del puntero b = %p", b);
	printf("\nEl número de carácteres imprimidos son: %d", i);
	printf("\n");
	i = printf("%p", (uintptr_t) b);
	printf("\n");
	i = ft_printf("%p", (uintptr_t) b);
	printf("\n");
	i = printf("%p %p", NULL, (void *) -1);
	printf("\n");
	i = ft_printf("%p %p", NULL, (void *) -1);
	printf("\nEl número de carácteres imprimidos son: %d", i);
	return (0);
}*/

//ft_ptrlen Calcula la longitud de la representación hexadecimal del 'value'
//ft_putptr Recursivamente imprime la representación hexadecimal del 'num'
//linea 42: convierte a su equivalente caracter ASCII
//si num>9, convierte el numero 10-15 a 'A'-'F'
//ft_print_ptr imprime el prefijo '0x' para indicar un número hexadecimal,
//seguido de la representación hexadecimal del 'value'
//linea 51: Incrementa el contador en 2 para "0x"
//linea 53: Incrementa el contador en 1 para "0"
//linea 56: Llama 'ft_putptr' para imprimir los dígitos hexadecimales 
//linea 57: y agrega la longitud de esta representación a 'counter'
