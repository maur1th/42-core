/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tm <tm@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/25 12:12:11 by tm                #+#    #+#             */
/*   Updated: 2016/01/26 19:51:00 by tm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>
#include <fillit.h>

static t_bool		solve_for_size(t_matrix *square, t_list *list)
{
	int			pos;
	char		*backup;

	pos = 0;
	if (list == NULL)
		return (true);
	while (pos < (int)(square->width * square->height))
	{
		backup = ft_strdup(square->data);
		if (insert_tetrimino(square, list->content, pos++))
			if (solve_for_size(square, list->next))
				return (true);
		free(square->data);
		square->data = backup;
	}
	return (false);
}

void				solve(t_list *list, size_t size)
{
	t_matrix	*square;

	square = ft_matrixnew(size, size);
	if (solve_for_size(square, list))
	{
		ft_putmatrix(square);
	}
	else
	{
		solve(list, size + 1);
	}
}
