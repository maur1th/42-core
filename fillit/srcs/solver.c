/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tm <tm@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/25 12:12:11 by tm                #+#    #+#             */
/*   Updated: 2016/01/28 11:02:02 by tm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>
#include <fillit.h>

static char			get_tetr_letter(char *tetr_data)
{
	while (*tetr_data != '\0')
	{
		if (*tetr_data != '0')
			return (*tetr_data);
		tetr_data++;
	}
	return ('\0');
}

static t_bool		solve_for_size(t_matrix *square, t_list *list)
{
	int			pos;
	char		tetr_letter;

	if (list == NULL)
		return (true);
	tetr_letter = get_tetr_letter(((t_matrix*)list->content)->data);
	pos = 0;
	while (pos < (int)(square->width * square->height))
	{
		if (insert_tetrimino(square, list->content, pos++))
			if (solve_for_size(square, list->next))
				return (true);
		remove_tetrimino(square->data, tetr_letter);
	}
	return (false);
}

void				solve(t_list *list, size_t size)
{
	t_matrix	*square;

	square = ft_matrixnew(size, size);
	if (solve_for_size(square, list))
	{
		ft_lstdel(&list, del_tetrimino);
		ft_strreplace(square->data, '0', '.');
		ft_putmatrix(square);
	}
	else
	{
		solve(list, size + 1);
	}
	free(square->data);
	free(square);
}
