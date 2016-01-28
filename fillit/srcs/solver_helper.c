/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_tetrimino.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tm <tm@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/26 11:01:50 by tm                #+#    #+#             */
/*   Updated: 2016/01/28 11:03:36 by tm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>

static t_bool	check_size(t_matrix *square, t_matrix *tetr, int pos)
{
	if (pos % square->width + tetr->width > square->width ||
		pos / square->width + tetr->height > square->height)
	{
		return (false);
	}
	return (true);
}

static t_bool	check_insert(t_matrix *square, t_matrix *tetr, int pos)
{
	int		i;
	int		row;
	int		col;

	i = -1;
	while (tetr->data[++i] != '\0')
	{
		row = pos / square->width + i / tetr->width;
		col = (pos + i % tetr->width) % square->width;
		if (ft_matrixget(square, row, col) != '0' && tetr->data[i] != '0')
			return (false);
	}
	return (true);
}

static void		insert(t_matrix *square, t_matrix *tetr, int pos)
{
	int		i;
	int		row;
	int		col;

	i = -1;
	while (tetr->data[++i] != '\0')
	{
		row = pos / square->width + i / tetr->width;
		col = (pos + i % tetr->width) % square->width;
		if (ft_matrixget(square, row, col) == '0')
			ft_matrixset(square, row, col, tetr->data[i]);
	}
}

t_bool			insert_tetrimino(t_matrix *square, t_matrix *tetr, int pos)
{
	if (!check_size(square, tetr, pos) || !check_insert(square, tetr, pos))
		return (false);
	insert(square, tetr, pos);
	return (true);
}

void	remove_tetrimino(char *square_data, char tetr_letter)
{
	while (*square_data != '\0')
	{
		if (*square_data == tetr_letter)
			*square_data = '0';
		square_data++;
	}
}
