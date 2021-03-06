/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshguti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 17:41:18 by joshguti          #+#    #+#             */
/*   Updated: 2018/11/13 17:45:15 by joshguti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int ac, char **av)
{
	int i;
	int shift;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			shift = av[1][i];
			if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				shift += 32;
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
				shift -= 32;
			write(1, &shift, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

