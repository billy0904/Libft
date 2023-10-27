# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gablee <gablee@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/06 17:33:57 by gablee            #+#    #+#              #
#    Updated: 2023/10/06 17:39:42 by gablee           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -wall -Wextra -Werror
HEADER = includes
SRCS = srcs/ft_strlen.c
OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	ar cr $(NAME) $(OBJS)

%.o : %.c ./includes/ft.h
	$(cc) $(CFLAGS) -c $< -o $@ -I $(HEADER)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re
