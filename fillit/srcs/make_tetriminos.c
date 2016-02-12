/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_tetriminos.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tm <tm@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/12 16:29:54 by gbienven          #+#    #+#             */
/*   Updated: 2016/01/28 13:24:46 by tm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>
#include <fillit.h>

static t_matrix	*make_one(char *str, char letter)
{
	int			i;
	int			row;
	int			col;
	t_matrix	*tetrimino;

	i = 0;
	tetrimino = ft_matrixnew(TT_HEIGHT, TT_WIDTH);
	while (i < TT_LENGTH)
	{
		col = (i % (TT_WIDTH + 1));
		row = (i / (TT_WIDTH + 1));
		if (str[i] == '#')
			ft_matrixset(tetrimino, row, col, letter);
		else if (str[i] == '.')
			ft_matrixset(tetrimino, row, col, '0');
		i++;
	}
	return (tetrimino);
}

t_list			*make_tetriminos(char *str, size_t str_length)
{
	t_list		*list;
	t_matrix	*tetrimino;
	char		letter;
	size_t		i;

	list = NULL;
	letter = 'A';
	i = 0;
	while (str[i] != '\0')
	{
		tetrimino = make_one(str + i, letter++);
		list = push_tetrimino(list, tetrimino);
		i = i + TT_LENGTH < str_length ? i + TT_LENGTH : str_length;
	}
	return (list);
}
