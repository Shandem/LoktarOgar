/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jogutier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 15:46:40 by jogutier          #+#    #+#             */
/*   Updated: 2018/08/30 16:42:22 by jogutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
		int *tmp;

		if (min >= max)		/* just in case */
		{
				tmp = NULL;
				return (tmp);
		}
		if (!(tmp = malloc(sizeof(int) * (min - max))))
			return(NULL);
		while (max >= min)
		{
				tmp[max - min - 1] = max - 1;
				max--;
		}
		return (tmp);
}

