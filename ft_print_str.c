/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oovsiann <oovsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 19:37:03 by oovsiann          #+#    #+#             */
/*   Updated: 2024/07/25 21:31:34 by oovsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(const char *str)
{
	int	contador;

	contador = 0;
	if (str == 0)
		str = "(null)";
	while (str[contador] != '\0')
	{
		write(1, &str[contador], 1);
		contador++;
	}
	return (contador);
}

/*int	main(void)
{
	int		res;
	char	*str1;
	char	*str2;

	str1 = "Es 100%% correcto.";
	str2 = "Esta cadena tiene un símbolo de %.";
	res = ft_printf("%s\n", str1);
	res = printf("%s\n", str1);
	ft_printf("Número de carácteres: %d\n", res);
	printf("Número de carácteres: %d\n", res);
	printf("The number of characters of \"%s\" is:%d\n", str1, res);
	printf("\n");

	res = ft_printf("%s\n", str2);
	printf("%s\n", str2);
	ft_printf("Número de carácteres: %d\n", res);
	printf("Número de carácteres: %d\n", res);
	printf("The number of characters of \"%s\" is:%d\n", str2, res);
	return (0);
}*/
