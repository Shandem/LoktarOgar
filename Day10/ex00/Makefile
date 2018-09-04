# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jogutier <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/02 21:06:53 by jogutier          #+#    #+#              #
#    Updated: 2018/09/02 21:13:17 by jogutier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_swap.c srcs/ft_strlen.c srcs/ft_strcmp.c

all : $(NAME)

$(NAME):
		gcc -c -Wall -Werror -Wextra $(SRC)
		ar rc $(NAME) ft_purchar.o ft_putstr.o ft_putswap.o ft_strlen.o ft_strcmp.o
		ranlib $(NAME)

clean:
		/bin/rm -f ft_putchar.o ft_putstr.o ft_swap.o ft_strlen.o ft_strcmp.o

fclean: clean
		/bin/rm -rf $(NAME)

re: fclean all
