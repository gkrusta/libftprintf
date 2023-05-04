/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 13:27:48 by gkrusta           #+#    #+#             */
/*   Updated: 2023/05/04 15:10:16 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_compare(va_list args, const char c, int current)
{

	if (c == 'c')
		current += ft_putchar(va_arg(args, int));
	else if (c == 's')
		current += ft_putstr(va_arg(args, char *));
	else if (c == 'p')
		current += ft_void_ptr(va_arg(args, unsigned long));
	else if (c == 'd' || c == 'i')
		current += ft_decimal(va_arg(args, int));
	else if (c == 'u')
		current += ft_us_decimal(va_arg(args, unsigned long));
	else if (c == 'x' || c == 'X')
		current += ft_hexadec(va_arg(args, unsigned long), c);
	else if (c == 'u')
		current += ft_us_decimal(va_arg(args, unsigned long));
}

int	ft_printf(char const *str, ...)
{
	int		i;
	int		count;
	int		current;
	va_list	args;

	va_start(args, str[i]);
	i = 0;
	count = 0;
	current = 0;
	while (str[i])
	{
		if (str[i] == '%')
			count += ft_compare(args, str[i + 1], current);
		else
			ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (count);
}
