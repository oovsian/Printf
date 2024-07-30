/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oovsiann <oovsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 19:19:25 by oovsiann          #+#    #+#             */
/*   Updated: 2024/07/20 19:58:45 by oovsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_int(int nb)
{
	char	character;
	int		counter;

	counter = 0;
	if (nb == -2147483648)
	{
		counter += write (1, "-2147483648", 11);
		return (11);
	}
	if (nb < 0)
	{
		counter += write(1, "-", 1);
		nb = -nb;
	}
	if (nb < 10)
	{
		character = nb + 48;
		counter += write(1, &character, 1);
	}
	else
	{
		counter += ft_print_int(nb / 10);
		counter += ft_print_int(nb % 10);
	}
	return (counter);
}

/*int	main(void)
{
	int	integer1;
	int	integer2;
	int	i;

	integer1 = -500;
	integer2 = -2147483648;
	printf("Mi función:\n");
	i = ft_print_int(integer1);
	printf("\nEl número de carácteres es: %d\n", i);
	i = ft_print_int(integer2);
	printf("\nEl número de carácteres es: %d", i);
	printf("\n");
	printf("\nLa función original printf:\n");
	i = printf("%i", integer1);
	printf("\nEl número de carácteres es: %d\n", i);
	i = printf("%i", integer2);
	printf("\nEl número de carácteres es: %d\n", i);
	printf("\n");
	printf("\nLa función ft_printf:\n");
	i = ft_printf("%i", integer1);
	printf("\nEl número de carácteres es: %d\n", i);
	i = ft_printf("%i", integer2);
	printf("\nEl número de carácteres es: %d\n", i);
	return (0);
}*/
