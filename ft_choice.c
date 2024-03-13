/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_choice.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zramahaz <zramahaz@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 07:35:14 by zramahaz          #+#    #+#             */
/*   Updated: 2024/03/13 16:38:35 by zramahaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_choice(const char *format, va_list args)
{
	if (*format == 'c')
		ft_putchar(va_arg(args, int));
	else if (*format == 's')
		ft_print_string(args);
	else if (*format == 'p')
		ft_print_address(args);
	else  if (*format == 'd' || *format == 'i')
		ft_print_int(args);
	else if (*format == 'u')
		ft_print_ui(args);
	else if (*format == 'x')
		ft_print_lower_hex(args);
	else if (*format == 'X')
		ft_print_upper_hex(args);
	else if (*format == '%')
		ft_putchar(va_arg(args, int));
}
