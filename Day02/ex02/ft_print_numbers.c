/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jogutier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 14:07:57 by jogutier          #+#    #+#             */
/*   Updated: 2018/08/22 15:06:38 by jogutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	char i;

	i = '0';
	while (i <= '9')
	{
		ft_putchar(i);
		i = i + 1;
	}
}

int		main()
{
	ft_print_numbers();
	ft_putchar('\n');
	return(0);
}
