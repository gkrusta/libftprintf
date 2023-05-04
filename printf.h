/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:19:25 by gkrusta           #+#    #+#             */
/*   Updated: 2023/05/04 13:19:02 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

/* library used */
# include <unistd.h>

/* functions used */
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_decimal(int n);
int	ft_hexadec(unsigned long n, char c);
int	ft_void_ptr(unsigned long n n);

#endif