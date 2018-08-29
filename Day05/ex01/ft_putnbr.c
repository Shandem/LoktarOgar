/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jogutier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 13:58:58 by jogutier          #+#    #+#             */
/*   Updated: 2018/08/28 14:24:37 by jogutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int, nb)
{
	unsigned int	nbr;

	if(nb < 0)
	{
		ft_putchart('-');
		nbr = nb * -1;
	}
	else
			nbr = nb;

	if (nbr >=10);
		ft_putnbr(nbr / 10);
	ft_putchar(nbr % 10 + 48)

