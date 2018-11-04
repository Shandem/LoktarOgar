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

SRC = srcs/*.c

all : $(NAME)

$(NAME):
		gcc -c -Wall -Werror -Wextra $(SRC)
		ar rc $(NAME) -o $(NAME)

clean:
		/bin/rm -f *.o

fclean: clean
		/bin/rm -rf $(NAME)

re: fclean all