/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ui.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zramahaz <zramahaz@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 08:18:58 by zramahaz          #+#    #+#             */
/*   Updated: 2024/03/13 16:39:35 by zramahaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	ft_putnbr_ui(unsigned int n)
{
	if (n > 9)
	{
		ft_putnbr_ui(n / 10);
		ft_putnbr_ui(n % 10);
	}
	else
		ft_putchar(n + 48);
}

void	ft_print_ui(va_list args)
{
	unsigned int	n;

	n = va_arg(args, unsigned int);
	if (n > 9)
	{
		ft_putnbr_ui(n / 10);
		ft_putnbr_ui(n % 10);
	}
	else
		ft_putchar(n + 48);
}
