# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jogutier <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/05 12:13:51 by jogutier          #+#    #+#              #
#    Updated: 2018/09/05 12:14:21 by jogutier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=eval_expr
SRCS=srcs/*.c

all:
	@gcc $(SRCS) -o $(NAME) -g

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
