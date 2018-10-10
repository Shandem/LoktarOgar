/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jogutier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 18:59:23 by jogutier          #+#    #+#             */
/*   Updated: 2018/08/22 21:32:42 by jogutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	<unistd.h>
#include	<stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int	num[3] = {48, 48, 48}; /*ascii value of 0*/ /* num = number*/

	while (num[0] <= 57)
	{
		if ((num[0] < num[1]) && (num[1] < num[2]))
		{
			ft_putchar(num[0]);
			ft_putchar(num[1]);
			ft_putchar(num[2]);
			if (num[0] != 55)
				ft_putchar(',');
			if (num[0] != 55)
				ft_putchar(' ');
		}
		if (num[2]++ >= 57)
		{
			num[2] = 48;
			num[1]++;
		}
		if (num[1] == 58)
		{
			num[1] = 48;
			num[0]++;
		}
	}
}

int	main()
{
	ft_print_comb();
	ft_putchar('\n');
	return(0);
}
