/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculs.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jogutier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 12:06:23 by jogutier          #+#    #+#             */
/*   Updated: 2018/09/05 13:27:36 by jogutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	do_op(int nb1, int nb2, char op)
{
	if (op == '+')
		return (nb1 + nb2);
	else if (op == '-')
		return (nb1 - nb2);
	else if (op == '/')
		return (nb1 / nb2);
	else if (op == '*')
		return (nb1 * nb2);
	else if (op == '%')
		return (nb1 % nb2);
	return (0);
}
