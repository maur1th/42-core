/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_tetriminos.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Genevieve <Genevieve@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/24 17:54:54 by gbienven          #+#    #+#             */
/*   Updated: 2015/12/26 17:48:36 by Genevieve        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <fillit.h>

void			make_tetrimino(char *str, int fill)
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
			ft_matrixset(tetrimino, y, x, '.');
		i++;
	}
	ft_putmatrix(tetrimino);
}

void			make_tetriminos(char *str)
{
	int			i;
	int			fill;

	i = 0;
	fill = 'A';
	while (str[i] != '\0')
	{
		make_tetrimino(str + i, fill);
		i += TT_LENGTH;
		fill++;
	}
}
