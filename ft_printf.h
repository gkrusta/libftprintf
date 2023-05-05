/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:19:25 by gkrusta           #+#    #+#             */
/*   Updated: 2023/05/05 10:27:51 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

/* libraries used */
# include <unistd.h>
# include <stdarg.h>

/* functions used */
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_decimal(int n);
int	ft_us_decimal(unsigned long n);
int	ft_hexadec(unsigned long n, char c);
int	ft_void_ptr(unsigned long n);
int	ft_printf(char const *str, ...);

#endif