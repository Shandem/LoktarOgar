/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jogutier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 14:55:27 by jogutier          #+#    #+#             */
/*   Updated: 2018/08/30 16:41:37 by jogutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdlib.h>

char	*ft_strdup(char *src)
{
		char	*n;
		int		i;

		n = malloc(sizeof(*src));
		if (n == NULL)
			return (NULL);
		i = 0;
		while (src[i] != '\0')
		{
				n[i] = src[i];
				i++;
		}
		n[i] = '\0';
		return (n);
}

