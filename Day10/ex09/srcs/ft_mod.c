/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mod.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jogutier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 13:38:50 by jogutier          #+#    #+#             */
/*   Updated: 2018/09/03 13:39:44 by jogutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_mod(int a, int b)
{
	if (b == 0)
		return (0);
	return (a % b);
}