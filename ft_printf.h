/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oovsiann <oovsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 20:18:17 by oovsiann          #+#    #+#             */
/*   Updated: 2024/07/27 19:26:37 by oovsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include <stdint.h>
# include <stdarg.h>

int		ft_printf(char const *str, ...);
int		ft_print_hex(unsigned int nr, char format);
int		ft_print_int(int nb);
int		ft_print_ptr(unsigned long long value);
int		ft_print_str(const char *str);
int		ft_print_unsigned(unsigned int num);
int		ft_putchar(char c);
int		ft_print_percent(void);

#endif