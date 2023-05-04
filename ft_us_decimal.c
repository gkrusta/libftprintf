/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_us_decimal.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 15:51:47 by gkrusta           #+#    #+#             */
/*   Updated: 2023/05/04 15:38:25 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_us_decimal(unsigned long n)
{
	int	i;

	i = 0;
	if (n < 10)
	{
		ft_putchar(n + '0');
		i++;
	}
	else
	{
		ft_decimal(n / 10);
		i += ft_putchar(n % 10 + '0');
	}
	return (i);
}