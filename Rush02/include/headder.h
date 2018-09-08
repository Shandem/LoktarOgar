/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   headder.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jogutier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 10:57:22 by jogutier          #+#    #+#             */
/*   Updated: 2018/09/08 11:25:13 by jogutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HEADDER_H
# define HEADDER_H
#include <unistd.h>
#include <stdlib.h>

int		is_valid_format(char *str, int rows, int cols);
void		find_rush(char *str);
int		ft_ct_rows(char *str);
int		ft_ct_cols(char *str);
int		ft_same_str(char *s1, char *s2);

void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putrush(char rus, int cols, int first_match);
char	*ft_rush(int x, int y);
char	*ft_rush01(int x, int y);
char	*ft_rush02(int x, int y);
char	*ft_rush03(int x, int y);
char	*ft_rush04(int x, int y);

#endif
