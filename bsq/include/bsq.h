/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoole <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 21:20:47 by spoole            #+#    #+#             */
/*   Updated: 2018/09/12 16:40:50 by jogutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

typedef struct  puzzle
{
    int     cols;
    int     row_num;
    char    *empty;
    char    *obst;
    char    *full;
    char    **input;
}               find_square;

int		read_map(char *filename);
int		ft_atoi(char *str);
int		ft_strcmp(char *s1, char *s2);
void		ft_strlen(char *str);
void		ft_putchar(char c);
void		ft_putnbr(int n);

#endif
