/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshguti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 10:24:49 by joshguti          #+#    #+#             */
/*   Updated: 2018/10/29 13:04:31 by joshguti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int i;
	int neg;
	int res;

	i = 0;
	res = 0;
	neg = 1;
	while (str[i] == 32 || str[i] == 9 || str[i] == 10 ||
			str[i] == 11 || str[i] == 12 || str[i] == 13)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	while (str[i])
	{
		if (str[i] < 48 || 57 > str[i])
			return (res * neg);
		else
			res = res * 10 + str[i] - '0';
		return (res * neg);
	}
}
