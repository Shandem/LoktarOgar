/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltaboada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 17:07:46 by ltaboada          #+#    #+#             */
/*   Updated: 2018/10/28 17:48:25 by ltaboada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int lx;
	int ly;

	ly = 1;
	while (ly <= y)
	{
		lx = 1;
		while (lx <= x)
		{
			if (ly == 1 || ly == y)
				if (lx == 1 || lx == x)
					ft_putchar('o');
				else
					ft_putchar('-');
			else if (lx == 1 || lx == x)
				ft_putchar('|');
			else
				ft_putchar(' ');
			lx++;
		}
		ft_putchar('\n');
		ly++;
	}
}
