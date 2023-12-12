# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abouafso <abouafso@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/12 16:15:49 by abouafso          #+#    #+#              #
#    Updated: 2023/12/12 18:44:54 by abouafso         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

HEARDER = ft_printf.h

CC = cc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

SRC = ft_strlen.c ft_putstr.c ft_putchar.c ft_putnbr.c ft_countlen.c ft_lenhexa.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar -rc $(NAME) $(OBJ)

%.o : %.c ${HEARDER}
	$(CC) $(CFLAGS) -c $<

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME) a.out

re: fclean all

.PHONY: all clean fclean re
