/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshguti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 15:55:05 by joshguti          #+#    #+#             */
/*   Updated: 2018/10/29 15:57:55 by joshguti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	while (str[0] != '\0')
	{
		if (!(str[0] >= 'a' && str[0] <= 'z'))
			return (0);
		str++;
	}
	return (1);
}
