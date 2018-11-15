/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshguti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 18:33:37 by joshguti          #+#    #+#             */
/*   Updated: 2018/11/14 16:47:15 by joshguti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		i;
	int		j;
	char	tmp;

	i = 0;
	while (str[i])
		i++;
	i--;
	j = 0;
	while (j < i)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i--;
		j++;
	}
	return (str);
}

#include <stdio.h>

int		main()
{
	char	s[100] =  "12345";
	
	printf("%s\n", ft_strrev(s));
	// s = ft_strrev(s);
	// s = ft_strrev(s);
	return (0);
}
