/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_upper_hex.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zramahaz <zramahaz@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 10:35:02 by zramahaz          #+#    #+#             */
/*   Updated: 2024/03/13 16:39:47 by zramahaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	ft_putnbr_uphex(unsigned int n)
{
	if (n > 16)
	{
		ft_putnbr_uphex(n / 16);
		ft_putnbr_uphex(n % 16);
	}
	else if (n > 9 && n < 16)
		ft_putchar(n + 55);
	else
		ft_putchar(n + 48);
}

void	ft_print_upper_hex(va_list args)
{
	unsigned int	n;

	n = va_arg(args, unsigned int);
	ft_putnbr_uphex(n);
}
