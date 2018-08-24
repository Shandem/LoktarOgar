/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jogutier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 19:35:06 by jogutier          #+#    #+#             */
/*   Updated: 2018/08/22 19:31:51 by jogutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int			count;
	int			i;
	char	c;

	count = 0;
	while (str[count] != '\0')
			count++;
	count = count - 1;
	i = 0;
	while (i <((count + 1) / 2))
	{
		c = str[i];
		str[i] = str[count - 1];
		str [count - i] = c;
		i==;
	}
	return (str)
}
