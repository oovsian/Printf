/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oovsiann <oovsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 18:47:29 by oovsiann          #+#    #+#             */
/*   Updated: 2024/07/20 19:59:32 by oovsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned(unsigned int num)
{
	if (num > 9)
	{
		return (ft_print_unsigned(num / 10) + ft_putchar(num % 10 + '0'));
	}
	return (ft_putchar(num + '0'));
}

/*int	main(void)
{
	unsigned int	uchar;
	int				res;

	uchar = 500;
	printf("\nMi función:\n");
	res = ft_print_unsigned(uchar);
	printf("\nUn número sin signo es: %u", uchar);
	printf("\nNúmero de carácteres son: %d", res);
	printf("\n");
	printf("\nLa función original printf:\n");
	res = printf("%u", uchar);
	printf("\n%i\n", res);
	printf("\n");
	printf("\nLa función ft_printf:\n");
	res = ft_printf("%u", uchar);
	printf("\n%i\n", res);
	return (0);
}*/