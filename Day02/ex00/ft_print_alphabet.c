/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jogutier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 13:01:42 by jogutier          #+#    #+#             */
/*   Updated: 2018/08/22 15:36:06 by jogutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


void ft_putchar(char c)
{
  write(1, &c, 1);
}


void ft_print_alphabet(void)
{
  char i;
  i = 'a';
    while ( i <= 'z') 
	{
    	ft_putchar(i);
    	i++ ;
    }
    
}

int main()
{
  ft_print_alphabet();
  ft_putchar('\n');
  return(0);
}
