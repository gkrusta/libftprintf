# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/02 16:20:12 by gkrusta           #+#    #+#              #
#    Updated: 2023/05/03 10:38:32 by gkrusta          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libfprintf.a

LIB = ar rcs

SRCS = ft_putchar.c ft_putstr.c

OBJS = $(SRCS:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

all: $(NAME)