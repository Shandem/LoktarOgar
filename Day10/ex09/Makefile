# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jogutier <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/03 19:36:53 by jogutier          #+#    #+#              #
#    Updated: 2018/09/03 19:37:04 by jogutier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=ft_advanced_do-op

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