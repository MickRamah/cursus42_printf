/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zramahaz <zramahaz@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 07:58:35 by zramahaz          #+#    #+#             */
/*   Updated: 2024/03/13 16:39:09 by zramahaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"


static void	ft_putnbr_i(int n)
{
	if (n < 0)
	{
		ft_putchar(45);
		n = -n;
		ft_putnbr_i(n);
	}
	else if (n > 9)
	{
		ft_putnbr_i(n / 10);
		ft_putnbr_i(n % 10);
	}
	else
		ft_putchar(n + 48);
}

void	ft_print_int(va_list args)
{
	int	n;

	n = va_arg(args, int);
	ft_putnbr_i(n);
}
