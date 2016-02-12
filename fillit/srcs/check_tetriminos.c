/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_tetriminos.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Genevieve <Genevieve@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/17 23:56:50 by gbienven          #+#    #+#             */
/*   Updated: 2016/01/26 21:15:03 by Genevieve        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <fillit.h>
#define mget(matrix, row, col) ft_matrixget(matrix, row, col)

static t_bool	check_one(t_matrix *matrix, int row, int col, int check)
{
	char	data;

	while (++row < TT_HEIGHT)
	{
		col = -1;
		while (++col < TT_WIDTH)
		{
			check = 0;
			data = mget(matrix, row, col);
			if (data != '0')
			{
				if (row + 1 < TT_HEIGHT && mget(matrix, row + 1, col) != '0')
					check++;
				if (col + 1 < TT_WIDTH && mget(matrix, row, col + 1) != '0')
					check++;
				if (row - 1 >= 0 && mget(matrix, row - 1, col) != '0')
					check++;
				if (col - 1 >= 0 && mget(matrix, row, col - 1) != '0')
					check++;
				if (check < 1)
					return (false);
			}
		}
	}
	return (true);
}

int				check_tetriminos(t_list *list)
{
	if (list == NULL)
		return (0);
	while (list != NULL)
	{
		if (!check_one(list->content, -1, -1, 0))
			return (0);
		list = list->next;
	}
	return (1);
}
