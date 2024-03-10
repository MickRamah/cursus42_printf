/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zramahaz <zramahaz@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 10:11:33 by zramahaz          #+#    #+#             */
/*   Updated: 2024/03/10 16:10:26 by zramahaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <string.h>
#include <unistd.h>

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int	resultat;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'd')
			{
				resultat = va_arg(args, int);
				ft_putnbr(resultat);
				format++;
			}
		}
		else
		{
			ft_putchar(*format);
			format++;
		}
	}

	va_end(args);
	return (0);
}

int main(void)
{
	//int len;
	//int len2;
	//unsigned int uns_int;
	//void *addresse;

	/*len = */ft_printf("Let's try to printf a simple sentence.\n");
	/*len2 = */printf("Let's try to printf a simple sentence.\n");
	//uns_int = (unsigned int)INT_MAX + 1024;
	//addresse = (void *)0x7ffe637541f0;
	//ft_printf("Length:[%d, %i]\n", len, len);
	//printf("Length:[%d, %i]\n", len2, len2);
	ft_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	/*ft_printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);
	ft_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);
	ft_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	ft_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	ft_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	ft_printf("Address:[%p]\n", addr);
	printf("Address:[%p]\n", addr);
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	ft_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	ft_printf("Unknown:[%r]\n");*/
	return (0);
}
