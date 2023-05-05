/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_us_decimal.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 15:51:47 by gkrusta           #+#    #+#             */
/*   Updated: 2023/05/05 12:58:23 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_us_decimal(unsigned int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		ft_putchar('-');
		i++;
		n *= (-1);
		n = UINT_MAX - n;
	}
	if (n < 10)
	{
		ft_putchar(n + '0');
		i++;
	}
	else
	{
		i++;
		i += ft_decimal(n / 10);
		ft_putchar(n % 10 + '0');
	}
	return (i);
}
