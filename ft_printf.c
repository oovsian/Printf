/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oovsiann <oovsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 19:30:02 by oovsiann          #+#    #+#             */
/*   Updated: 2024/07/27 19:25:21 by oovsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_specifier(char c, va_list argptr)
{
	int	i;

	i = 0;
	if (c == 'c')
		i += ft_putchar(va_arg(argptr, int));
	else if (c == 'i' || c == 'd')
		i += ft_print_int(va_arg(argptr, int));
	else if (c == 's')
		i += ft_print_str(va_arg(argptr, const char *));
	else if (c == 'p')
		i += ft_print_ptr(va_arg(argptr, unsigned long long));
	else if (c == 'u')
		i += ft_print_unsigned(va_arg(argptr, unsigned int));
	else if (c == 'x' || c == 'X')
		i += ft_print_hex(va_arg(argptr, unsigned int), c);
	else if (c == '%')
		i += ft_print_percent();
	else
		i += ft_putchar(c);
	return (i);
}

int	ft_printf(char const *str, ...)
{
	va_list	argptr;
	int		i;

	va_start(argptr, str);
	i = 0;
	while (*str != '\0')
	{
		if (*str == '%')
		{
			str++;
			i += ft_specifier(*str, argptr);
		}
		else
		{
			i += ft_putchar(*str);
		}
		str ++;
	}
	va_end(argptr);
	return (i);
}

int main(void)
{
	int n = 5;
	void *p = &n;
	printf("%d\n", printf("%c\n", 'j'));
	printf("%d\n", ft_printf("%c\n", 'j'));
	printf("%d\n", printf("%s\n", "hello world"));
	printf("%d\n", ft_printf("%s\n", "hello world"));
	printf("%d\n", printf("%p\n", p));
	printf("%d\n", ft_printf("%p\n", p));
	printf("%d\n", printf("%d\n", 42));
	printf("%d\n", ft_printf("%d\n", 42));
	printf("%d\n", printf("%i\n", -42));
	printf("%d\n", ft_printf("%i\n", -42));
	printf("%d\n", printf("%u\n", -42));
	printf("%d\n", ft_printf("%u\n", -42));
	printf("%d\n", printf("%x\n", 7891));
	printf("%d\n", ft_printf("%x\n", 7891));
	printf("%d\n", printf("%X\n", 134));
	printf("%d\n", ft_printf("%X\n", 134));
	printf("%d\n", printf("Hola %X, %s, %c, %i, %u Mundo\n", 512, "hello world", 'h', 42, -5));
	printf("%d\n", ft_printf("Hola %X, %s, %c, %i, %u Mundo\n", 512, "hello world", 'h', 42, -5));

	ft_printf("Hola %X, %X, %X Mundo\n", 512, 512, 512);

	return (0);
}
