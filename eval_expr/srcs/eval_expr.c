/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jogutier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 12:08:46 by jogutier          #+#    #+#             */
/*   Updated: 2018/09/05 20:20:57 by jogutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../includes/functions.h"

int		parenth(char **str)
{
	int		nbr;
	int		sign;

	nbr = 0;
	sign = 1;
	if ((*str)[0] == '+' || (*str)[0] == '-')
	{
		if ((*str)[0] == '-')
			sign = -1;
		*str += 1;
	}
	if ((*str)[0] == '(')
	{
		*str += 1;
		nbr = primary(str);
		if ((*str)[0] == ')')
			*str += 1;
		return (sign * nbr);
	}
	while ('0' <= (*str)[0] && (*str)[0] <= '9')
	{
		nbr = (nbr * 10) + (*str)[0] - '0';
		*str += 1;
	}
	return (sign * nbr);
}

int		multi(char **str)
{
	int		nb1;
	int		nb2;
	char	op;

	nb1 = parenth(str);
	while ((*str)[0] == '*' || (*str)[0] == '/' || (*str)[0] == '%')
	{
		op = (*str)[0];
		*str += 1;
		nb2 = parenth(str);
		nb1 = do_op(nb1, nb2, op);
	}
	return (nb1);
}

int		primary(char **str)
{
	int		nb1;
	int		nb2;
	char	op;

	nb1 = parenth(str);
	while ((*str)[0] != '\0' && (*str)[0] != ')')
	{
		op = (*str)[0];
		*str += 1;
		if (op == '+' || op == '-')
			nb2 = multi(str);
		else
			nb2 = parenth(str);
		nb1 = do_op(nb1, nb2, op);
	}
	return (nb1);
}

char	*remove_w(char *str)
{
	int		i;
	int		j;
	char	*str2;

	i = 0;
	j = 0;
	if (!(str2 = malloc(sizeof(char) * (ft_strlen(str) + 1))))
		return (NULL);
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			str2[j] = str[i];
			j +=  1;
		}
		i += 1;
	}
	str2[j] = '\0';
	return (str2);
}

int		eval_expr(char *str)
{
	str = remove_w(str);
	if (str[0] == '\0')
		return (0);
	return (primary(&str));
}
