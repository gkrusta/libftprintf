/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 10:34:21 by gkrusta           #+#    #+#             */
/*   Updated: 2023/05/04 15:01:28 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdio.h>
int	main(void)
{
	int	c = 1234;
	int	*ptr = &c;
/* 	char	str[] = "hola123"; */
/* 	printf("%p", (void *)ptr); */
/* 	ft_decimal(1234); */
/* 	ft_hexadec(0, 'x'); */
/* 	ft_void_ptr(1234); */
	printf ("%u", -1234);
	return (0);
}