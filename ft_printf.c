/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 13:27:48 by gkrusta           #+#    #+#             */
/*   Updated: 2023/05/04 16:14:14 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_compare(va_list args, const char c, int count)
{

	if (c == 'c')
		count += ft_putchar(va_arg(args, int));
	else if (c == 's')
		count += ft_putstr(va_arg(args, char *));
	else if (c == 'p')
		count += ft_void_ptr(va_arg(args, unsigned long));
	else if (c == 'd' || c == 'i')
		count += ft_decimal(va_arg(args, int));
	else if (c == 'u')
		count += ft_us_decimal(va_arg(args, unsigned long));
	else if (c == 'x' || c == 'X')
		count += ft_hexadec(va_arg(args, unsigned long), c);
	else if (c == '%')
		count += ft_putchar('%');
	return (count);
}

int	ft_printf(char const *str, ...)
{
	int		i;
	int		count;
	va_list	args;

	va_start(args, str);
	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			count += ft_compare(args, str[i + 1], count);
			i++;
		}
		else
			count += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (count);
}
