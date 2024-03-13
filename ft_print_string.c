/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zramahaz <zramahaz@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 07:41:17 by zramahaz          #+#    #+#             */
/*   Updated: 2024/03/13 16:39:29 by zramahaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_print_string(va_list args)
{
	char	*str;

	str = va_arg(args, char *);
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}
