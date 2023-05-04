/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadec.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 16:15:44 by gkrusta           #+#    #+#             */
/*   Updated: 2023/05/04 13:23:26 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_hexadec(unsigned long  n, char c)
{
	int	i;

	i = 0;
	if (n < 0)
		return (-1);
	if (n < 16)
	{
		if (c == 'x')
			ft_putchar("0123456789abcdef"[n % 16]);
		else
			ft_putchar("0123456789ABCDEF"[n % 16]);
		i++;
	}
	else
	{
		ft_hexadec(n / 16, c);
		if (c == 'x')
			i += ft_putchar("0123456789abcdef"[n % 16]);
		else
			i += ft_putchar("0123456789ABCDEF"[n % 16]);
	}
	return (i);
}
