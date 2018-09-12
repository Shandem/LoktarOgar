/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoole <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 21:05:03 by spoole            #+#    #+#             */
/*   Updated: 2018/09/11 15:38:13 by spoole           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include "bsq.h"

find_square		*new_node(int size,char *emp, char *ob, char *ful)
{
	find_square *temp;

	temp = (find_square*)malloc(sizeof(find_square));
	temp->cols = size;
	temp->row_num = -1;
	temp->empty = emp;
	temp->obst = ob;
	temp->full = ful;
	temp->input = NULL;

	return (temp);
}

char	*read_lines(char *filename, int *start_print, int *print_to, int row_num)
{
	int fd;
	char *temp;
	char shut;
	char *begin;
	int start;

	temp = (char*)malloc(sizeof(char)* ((row_num > 0) ? row_num : 10));
	begin = temp;
	start = 0;
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return ("Error");
	while(start < *print_to)
	{
		while(shut != '\n' && shut != EOF)
		{
			read(fd, &shut, 1);
			if(start >= *start_print)
				*temp = shut;
			temp++;
		}
		start++;
	}
	close(fd);
	if (shut == EOF)
		*print_to = -1;
	else
		*print_to = *print_to + start;
	*start_print = *start_print + start;
	return (begin);
}

find_square		*set_map_attributes(char *first)
{
	int size;
	char *empty;
	char *obst;
	char *full;

	empty = (char*)malloc(sizeof(char));
	obst = (char*)malloc(sizeof(char));
	full = (char*)malloc(sizeof(char));
	size = 0;
	while (*first != '\0')
	{
		if (*first >= '0' && *first <= '9' && size == 0)
			size = (size * 10) + ft_atoi(first);
		else if (*first >= '0' && *first <= '9');
		else
		{
			*empty = *first;
			first++;
			*obst = *first;
			first++;
			*full = *first;
			break;
		}
		first++;
	}
	return (new_node(size, empty, obst, full));
}

void	make_grid(find_square *bsq, int *file_depth, int *already_printed)
{
	char **temp;
	char row_temp;
	int count;

	count = bsq->cols;
	temp = (char**)malloc(sizeof(char*) * count);
	while (count > 0)
	{
		row_temp = (char*)malloc(sizeof(char) * row_length);
	}
}

int		read_map(char *filename)
{
	
	//char temp;
	//char *firstLine;
	find_square *bsq;
	int file_depth;
	int already_printed;
	
	file_depth = 1;
	already_printed = 0;
	while (file_depth > 0)
	{
		bsq = set_map_attributes(read_lines(filename, &already_printed, &file_depth, bsq->row_num));
		make_grid(&file_depth, bsq);
	}
	return (0);
}
