/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jogutier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 13:48:32 by jogutier          #+#    #+#             */
/*   Updated: 2018/08/22 19:43:27 by jogutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


void ft_putchar(char c)
{
  write(1, &c, 1);
}


void ft_print_reverse_alphabet(void)
{
  char i;
  i = 'z';
    while ( i >= 'a') 
    {
    ft_putchar(i);
    --i;
    }
}

int main()
{
  ft_print_reverse_alphabet();
  ft_putchar('\n');
  return(0);
}
