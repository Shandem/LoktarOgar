/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jogutier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 21:18:37 by jogutier          #+#    #+#             */
/*   Updated: 2018/09/04 09:38:19 by jogutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*r;

	i = 0;
	r = (int*)malloc(sizeof(int) * (length));
	while (i < length)
	{
		r[i] = (*f)(tab[i]);
		++i;
	}
	return (r);
}
