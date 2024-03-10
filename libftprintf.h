/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zramahaz <zramahaz@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 10:08:14 by zramahaz          #+#    #+#             */
/*   Updated: 2024/03/10 16:06:41 by zramahaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
#include <limits.h>

int	ft_printf(const char *format, ...);
int	ft_putchar(int c);

void	ft_putnbr(int n);

#endif
