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
	int	numbers[3] = {48, 48, 48};

	while (numbers[0] <= 57)
	{
		if ((numbers[0] < numbers[1]) && (numbers[1] < numbers[2]))
		{
			ft_putchar(numbers[0]);
			ft_putchar(numbers[1]);
			ft_putchar(numbers[2]);
			if (numbers[0] != 55)
				ft_putchar(',');
			if (numbers[0] != 55)
				ft_putchar(' ');
		}
		if (numbers[2]++ >= 57)
		{
			numbers[2] = 48;
			numbers[1]++;
		}
		if (numbers[1] == 58)
		{
			numbers[1] = 48;
			numbers[0]++;
		}
	}
}

int	main()
{
	ft_print_comb();
	ft_putchar('\n');
	return(0);
}
