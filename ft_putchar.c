/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oovsiann <oovsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 19:36:20 by oovsiann          #+#    #+#             */
/*   Updated: 2024/07/20 19:59:53 by oovsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

/*int	main(void)
{
	char	a;
	char	result;

	a = 'w';
	printf("Mi función:\n");
	result = ft_putchar(a);
	printf("\nEl número de caracteres:%d\n", result);
	printf("\n");
	printf("La función original printf:\n");
	result = printf("%c", a);
	printf("\n%d\n", result);
	printf("\n");
	printf("La función ft_printf:\n");
	result = ft_printf("%c", a);
	printf("\n%d\n", result);
	return (0);
}*/