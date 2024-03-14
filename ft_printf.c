/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zramahaz <zramahaz@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 10:11:33 by zramahaz          #+#    #+#             */
/*   Updated: 2024/03/14 13:42:57 by zramahaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>
#include <limits.h>

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	count = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			ft_choice(format, args, &count);
			format++;
		}
		else
		{
			ft_putchar(*format);
			format++;
			count++;
		}
	}
	va_end(args);
	return (count);
}

/*int	main(void)
{
	int	len;
	int	len2;

	len = ft_printf(" %x \n", 16);
	len2 = printf(" %x \n", 16);
	printf("%d\n", len);
	ft_printf("%d\n", len2);

	printf(" %d \n", INT_MIN + 1);
	ft_printf(" %d \n", INT_MIN + 1);

	printf(" %p %p \n", 0, 0);
	ft_printf(" %p %p \n", 0, 0);

	return (0);
}*/
