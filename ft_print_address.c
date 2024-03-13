/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_address.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zramahaz <zramahaz@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 08:33:45 by zramahaz          #+#    #+#             */
/*   Updated: 2024/03/13 16:38:26 by zramahaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	ft_putnbr_hex(long unsigned n)
{
	if (n > 16)
	{
		ft_putnbr_hex(n / 16);
		ft_putnbr_hex(n % 16);
	}
	else if (n > 9 && n < 16)
		ft_putchar(n + 87);
	else
		ft_putchar(n + 48);
}

void	ft_print_address(va_list args)
{
	long unsigned	p;

	p = (long unsigned)va_arg(args, void *);
	ft_putchar(48);
	ft_putchar('x');
	ft_putnbr_hex(p);
}
