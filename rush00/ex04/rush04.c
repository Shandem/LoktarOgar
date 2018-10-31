/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltaboada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 18:31:51 by ltaboada          #+#    #+#             */
/*   Updated: 2018/10/28 18:39:33 by ltaboada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int max_x;
	int max_y;

	max_x = x;
	max_y = y;
	while (y > 0)
	{
		while (x > 0)
		{
			if ((x == max_x && y == max_y) || (x == 1 && y == 1))
				ft_putchar('A');
			else if ((x == 1 && y == max_y) || (x == max_x && y == 1))
				ft_putchar('C');
			else if ((x == max_x || x == 1) || (y == max_y || y == 1))
				ft_putchar('B');
			else
				ft_putchar(' ');
			if (x == 1)
				ft_putchar('\n');
			x--;
		}
		y--;
		x = max_x;
	}
}
