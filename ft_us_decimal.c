/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_us_decimal.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 15:51:47 by gkrusta           #+#    #+#             */
/*   Updated: 2023/05/03 15:57:52 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	main(long int n)
{
	int	i;

	i = 1;
	if (n < 0)
		return (-1);
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