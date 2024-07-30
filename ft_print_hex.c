/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oovsiann <oovsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 19:56:01 by oovsiann          #+#    #+#             */
/*   Updated: 2024/07/22 19:06:21 by oovsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned int nr, char format)
{
	const char	*base_lower = "0123456789abcdef";
	const char	*base_upper = "0123456789ABCDEF";
	const char	*base;
	int			count;

	count = 0;
	if (format == 'x')
	{
		base = base_lower;
	}
	else
	{
		base = base_upper;
	}
	if (nr >= 16)
	{
		count += ft_print_hex(nr / 16, format);
		count += ft_putchar(base[nr % 16]);
	}
	else
	{
		count += ft_putchar(base[nr]);
	}
	return (count);
}

/*int	main(void)
{
	int		a1;
	int		a2;
	int		i;

	i = 0;
	a1 = 255;
	a2 = 123456;
	i = ft_print_hex(a1, 'x');
	printf("\nFunción original printf:%x\n", a1);
	ft_printf("Función ft_printf:%x\n", a1);
	printf("Número de carácteres:%d\n", i);
	printf("\n");
	i = ft_print_hex(a1, 'X');
	printf("\nFunción original printf:%X\n", a1);
	ft_printf("Función ft_printf:%x\n", a1);
	printf("Número de carácteres:%d\n", i);
	printf("\n");
	i = ft_print_hex(a2, 'x');
	printf("\nFunción original printf:%x\n", a2);
	ft_printf("Función ft_printf:%x\n", a2);
	printf("Número de carácteres:%d\n", i);
	return (0);
}*/
//linea 33: imprime recursivamente un entero en formato hexadecimal
//utilizando la cadena base 16
//utiliza división y módulo por 16 para convertir el número a hexadecimal
//y ft_putchar para imprimir cada dígito