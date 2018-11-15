/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshguti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 20:14:47 by joshguti          #+#    #+#             */
/*   Updated: 2018/11/14 20:19:54 by joshguti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

#include <stdio.h>
#include <string.h>

int		main()
{
	char strg1[50], strg2[50];

	printf("Enter first string: ");
	gets(strg1);

	printf("Enter second string: ");
	gets(strg2);

	if(ft_strcmp(strg1, strg2)==0)
		printf("You entered the same string two times\n");
	else
		printf("Entered strings are not the same!\n");
	return (0);
}
