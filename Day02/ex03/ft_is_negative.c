/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jogutier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 15:07:41 by jogutier          #+#    #+#             */
/*   Updated: 2018/08/22 18:51:42 by jogutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void 	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(void)
{
	char i;

	i = 0;
	if (i>=0)
		{
			ft_putchar('P');
		}
		else
			{
				ft_putchar('N');
			}	
}

int	main()
{
	ft_is_negative();
	ft_putchar('\n');
	return(0);
}
