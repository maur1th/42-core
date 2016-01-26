/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_tetrimino.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tm <tm@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/26 11:01:50 by tm                #+#    #+#             */
/*   Updated: 2016/01/26 18:25:30 by tm               ###   ########.fr       */
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

t_bool			insert_tetrimino(t_matrix *square, t_matrix *tetr, int pos)
{
	int		i;
	int		row;
	int		col;
	char	*backup;

	if (!check_size(square, tetr, pos))
		return (false);
	backup = ft_strdup(square->data);
	i = -1;
	while (tetr->data[++i] != '\0')
	{
		row = pos / square->width + i / tetr->width;
		col = (pos + i % tetr->width) % square->width;
		if (ft_matrixget(square, row, col) != '0' && tetr->data[i] != '0')
		{
			free(square->data);
			square->data = backup;
			return (false);
		}
		ft_matrixset(square, row, col, tetr->data[i]);
	}
	ft_putchar('\n');
	free(backup);
	return (true);
}
