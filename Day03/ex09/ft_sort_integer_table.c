/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jogutier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 13:35:17 by jogutier          #+#    #+#             */
/*   Updated: 2018/08/24 13:15:45 by jogutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_sort_integer_table(int *tab, int size)
{
    int count;
    int i;
    int     tmp;

    count = 0;
    while (count < size)
    {
        i = 0;
        while (i < (size - 1))
        {
            if (tab[i] > tab[i + 1])
            {
                tmp = tab[i];
                tab[i] = tab[i + 1];
                tab[i + 1] = tmp;
            }
                 i++;
       }
            count++;     
    }
        return (0);
}
