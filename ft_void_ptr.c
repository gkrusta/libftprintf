/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_void_ptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 12:21:26 by gkrusta           #+#    #+#             */
/*   Updated: 2023/05/04 13:23:26 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_void_ptr(unsigned long ptr)
{
	int	i;

	i = 0;
	i += ft_putstr("0x");
	i += ft_hexadec(n);
	return (i);
}