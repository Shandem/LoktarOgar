/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_slit_whitespaces.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jogutier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 16:43:56 by jogutier          #+#    #+#             */
/*   Updated: 2018/08/30 18:03:31 by jogutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_word(char c, char cbefore)
{
	return (((c >= 33 && c <= 126)
			&& (cbefore == ' ' || cbefore == '\n' || cbefore == '\t'));
}

int		get_count(char *str)
{
	int	count; /*word*/
	int	i;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (is_word(str[i], str[i - 1]) || (str[i] != ' ' && str[i] != '\n' &&
					str[i] != '\t' && i == 0))
			count++;
		i++;
	}
	return (count);
}

int		if_new_string(int i, char *str)
{
	return (i > 0 && str[i - 1] != ' ' && str[i - 1] != '\n' &&
			str[i - 1] != '\t');
}

int		*get_size(char *str)
{
	int	index;
	int	i;
	int	count;
	int	size;

	i = 0;
	count = count(str);
	size = malloc(count * sizeof(int));
	while (i <= count)
	{
		size[i] = 0;
		i++;
	}
	i = 0;
	index = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
			size[index]++;
		else if (if_new_string(i, str))
			index++;
		i++;
	}
	return (size);
}

char	**ft_split_whitespaces(char *str)
{
	char	**words;
	int		i;
	int		j;
	int		index;
	int		*size;

	words = malloc((get_count(str) + 1) * sizeof(char*));
	size = size(str);
	index = 0;
	j = 0;
	i = -1;
	while (str[++i] != '\0')
	{
		if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
		{
			if (i == 0 || is_word(str[i], str[i - 1]))
				words[index] = malloc(size[index] * sizeof(char));
			words[index][j] = str[i];
			words[index][++j] = '\0';
		}
		else if (if_new_string(i, str) && ++index)
			j = 0;
	}
	words[count(str)] = 0;
	return (words);
}

