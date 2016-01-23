/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_tetriminos.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tm <tm@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/17 23:56:50 by gbienven          #+#    #+#             */
/*   Updated: 2016/01/23 07:07:03 by tm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <fillit.h>
#define mget(matrix, row, col) ft_matrixget(matrix, row, col)

static int	check_each_tetrimino(t_matrix *matrix, int i, int j, int check)
{
	char	data;

	while (i++ < TT_WIDTH)
	{
		j = -1;
		while (j++ < TT_WIDTH)
		{
			data = mget(matrix, i, j);
			if (data != '.')
			{
				if ((i + 1) < TT_HEIGHT && (mget(matrix, i + 1, j) != '.'))
					check++;
				if ((j + 1) < TT_WIDTH && (mget(matrix, i, j + 1) != '.'))
					check++;
				if ((i - 1) >= 0 && (mget(matrix, i - 1, j) != '.'))
					check++;
				if ((j - 1) >= 0 && (mget(matrix, i, j - 1) != '.'))
					check++;
				if (check < 1)
					return (0);
			}
		}
	}
	return (1);
}

int			check_tetriminos(t_list *list)
{
	if (list == NULL)
		return (0);
	while (list != NULL)
	{
		if (!check_each_tetrimino(list->content, -1, -1, 0))
			return (0);
		list = list->next;
	}
	return (1);
}
