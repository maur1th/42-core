/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_tetriminos.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Genevieve <Genevieve@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/17 23:56:50 by gbienven          #+#    #+#             */
/*   Updated: 2015/12/28 02:06:23 by Genevieve        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <libft.h>
#include <fillit.h>

int				check_form(t_list *list)
{
	t_matrix	*matrix;
	int			i;
	int			j;
	char		data;
	int			check;

	check = 0;
	if (list == NULL)
		return (0);
	while (list != NULL)
	{
		matrix = list->content;
		i = 0;
		while (i < TT_WIDTH)
		{
			j = 0;
			while (j < TT_WIDTH)
			{
				printf("i : %d  j : %d\n", i, j);
				data = ft_matrixget(matrix, i, j);
				if (data != '.')
				{
					if ((i + 1) < TT_HEIGHT && (ft_matrixget(matrix, i + 1, j) != '.'))
						check++;
					if ((j + 1) < TT_WIDTH && (ft_matrixget(matrix, i, j + 1) != '.'))
						check++;
					if ((i - 1) >= 0 && (ft_matrixget(matrix, i - 1, j) != '.'))
						check++;
					if ((j - 1) >= 0 && (ft_matrixget(matrix, i, j - 1) != '.'))
						check++;
					if (check < 1)
						return (0);
				}
				j++;
			}
			i++;
		}
		printf("new tetrimino! <3\n");
		list = list->next;
	}
	return (1);
}

int				check_line(char *str)
{
	int			i;
	int			hash;

	i = 0;
	hash = 0;
	while (i < TT_WIDTH)
	{
		if (!(str[i] == '.' || str[i] == '#'))
			return (-1);
		if (str[i] == '#')
			hash++;
		i++;
	}
	if (str[i] != '\n')
		return (-1);
	return (hash);
}

int				check_tetrimino(char *str)
{
	int			i;
	int			j;
	int			hash;
	int			hash_total;

	j = 0;
	i = 0;
	hash_total = 0;
	while (j < TT_HEIGHT)
	{
		hash = check_line(str + i);
		if (hash == -1)
			return (0);
		hash_total += hash;
		i += TT_WIDTH + 1;
		j++;
	}
	if (str[i] != '\n' || hash_total != 4)
		return (0);
	return (1);
}

int				check_lines(char *str)
{
	int			i;
	int			j;

	j = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (check_tetrimino(str + i) == 0)
			return (0);
		i += TT_LENGTH;
		j++;
	}
	if (j < 1 || j > 26)
		return (0);
	return (1);
}
