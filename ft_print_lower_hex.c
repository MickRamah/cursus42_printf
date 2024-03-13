/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_lower_hex.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zramahaz <zramahaz@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 10:07:38 by zramahaz          #+#    #+#             */
/*   Updated: 2024/03/13 16:39:16 by zramahaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	ft_putnbr_lowhex(unsigned int n)
{
	if (n > 16)
	{
		ft_putnbr_lowhex(n / 16);
		ft_putnbr_lowhex(n % 16);
	}
	else if (n > 9 && n < 16)
		ft_putchar(n + 87);
	else
		ft_putchar(n + 48);
}

void	ft_print_lower_hex(va_list args)
{
	unsigned int	n;

	n = va_arg(args, unsigned int);
	ft_putnbr_lowhex(n);
}
