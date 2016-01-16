/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_tetriminos.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Genevieve <Genevieve@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/12 16:29:54 by gbienven          #+#    #+#             */
/*   Updated: 2016/01/16 15:44:14 by Genevieve        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <fillit.h>
#include <stdlib.h>

t_matrix		*make_tetrimino(char *str, int fill)
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
			ft_matrixset(tetrimino, y, x, fill);
		else if (str[i] == '.')
			ft_matrixset(tetrimino, y, x, '0');
		i++;
	}
	trim_tetrimino(tetrimino);
	ft_putmatrix(tetrimino);
	ft_putstr("---\n");
	return (tetrimino);
}

t_list			*make_tetriminos(char *str)
{
	int			i;
	int			fill;
	t_list		*list;
	t_list		*new_list;
	t_matrix	*tetrimino;

	i = 0;
	fill = 'A';
	list = NULL;
	while (str[i] != '\0')
	{
		tetrimino = make_tetrimino(str + i, fill);
		new_list = ft_lstnew(tetrimino, sizeof(t_matrix));
		free(tetrimino);
		ft_lstpush(&list, new_list);
		i += TT_LENGTH;
		fill++;
	}
	return (list);
}
