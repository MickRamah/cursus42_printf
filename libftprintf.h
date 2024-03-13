/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zramahaz <zramahaz@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 10:08:14 by zramahaz          #+#    #+#             */
/*   Updated: 2024/03/13 16:40:01 by zramahaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
#include <limits.h>

int	ft_printf(const char *format, ...);

void	ft_putchar(int c);
void	ft_choice(const char *format, va_list args);
void	ft_print_string(va_list args);
void	ft_print_int(va_list args);
void	ft_print_ui(va_list args);
void	ft_print_address(va_list args);
void	ft_print_lower_hex(va_list args);
void	ft_print_upper_hex(va_list args);

#endif
