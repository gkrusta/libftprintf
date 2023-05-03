/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decimal.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 13:51:21 by gkrusta           #+#    #+#             */
/*   Updated: 2023/05/03 15:34:12 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_decimal(int n)
{
	int	i;

	i = 1;
	if (n < 0)
	{
		ft_putchar('-');
		i++;
	}
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
