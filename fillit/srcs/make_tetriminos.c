/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_tetriminos.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tm <tm@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/12 16:29:54 by gbienven          #+#    #+#             */
/*   Updated: 2016/01/23 06:52:42 by tm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <fillit.h>
#include <stdlib.h>

static t_matrix	*make_one(char *str)
{
	int			i;
	int			y;
	int			x;
	t_matrix	*tetrimino;

	i = 0;
	tetrimino = ft_matrixnew(TT_HEIGHT, TT_WIDTH);
	while (i < TT_LENGTH)
	{
		x = (i % (TT_WIDTH + 1));
		y = (i / (TT_WIDTH + 1));
		if (str[i] == '#')
			ft_matrixset(tetrimino, y, x, '1');
		else if (str[i] == '.')
			ft_matrixset(tetrimino, y, x, '0');
		i++;
	}
	return (trim_tetrimino(tetrimino));
}

t_list			*make_tetriminos(char *str)
{
	t_list		*list;
	t_list		*new_list;
	t_matrix	*tetrimino;

	list = NULL;
	while (*str != '\0')
	{
		tetrimino = make_one(str);
		new_list = ft_lstnew(tetrimino, sizeof(t_matrix));
		free(tetrimino);
		ft_lstpush(&list, new_list);
		str += TT_LENGTH;
	}
	print_tetriminos(list);
	return (list);
}
