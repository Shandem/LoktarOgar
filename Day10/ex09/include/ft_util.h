/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_util.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jogutier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 19:36:32 by jogutier          #+#    #+#             */
/*   Updated: 2018/09/03 19:36:36 by jogutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_UTIL_H
# define FT_UTIL_H

void			ft_putchar(char c);
void			ft_putnbr(int nb);
int				calculate(int a, int b, int operation);
int				ft_atoi(char *str);
int				ft_add(int a, int b);
int				ft_sub(int a, int b);
int				ft_mul(int a, int b);
int				ft_div(int a, int b);
int				ft_mod(int a, int b);
int				ft_usage(int a, int b);

typedef struct	s_opp
{
	char	*operation;
	int		(*function)(int, int);
}				t_opp;

#endif
