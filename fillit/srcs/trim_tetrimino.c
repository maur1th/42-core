/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trim_tetriminos.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbienven <gbienven@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/12 14:37:20 by gbienven          #+#    #+#             */
/*   Updated: 2015/12/28 00:44:25 by gbienven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>
#include <fillit.h>

static int		check_empty_row(t_matrix *matrix, int row)
{
	int			i;
	char		data;

	i = 0;
	while (i < TT_HEIGHT)
	{
		data = ft_matrixget(matrix, row, i);
		if (data != '0')
			return (0);
		i++;
	}
	return (1);
}

static int		check_empty_col(t_matrix *matrix, int col)
{
	int			i;
	char		data;

	i = 0;
	while (i < TT_WIDTH)
	{
		data = ft_matrixget(matrix, i, col);
		if (data != '0')
			return (0);
		i++;
	}
	return (1);
}

static t_matrix	*new_trimmed_tetrimino(
	t_matrix *matrix, int *start_row, int *start_col, int i)
{
	int			empty_cols;
	int			empty_rows;

	empty_cols = 0;
	empty_rows = 0;
	while (++i < TT_WIDTH)
	{
		if (check_empty_col(matrix, i))
			empty_cols++;
		else if (*start_col == -1)
			*start_col = i;
	}
	i = -1;
	while (++i < TT_HEIGHT)
	{
		if (check_empty_row(matrix, i))
			empty_rows++;
		else if (*start_row == -1)
			*start_row = i;
	}
	return (ft_matrixnew(TT_HEIGHT - empty_rows, TT_WIDTH - empty_cols));
}

static void		fill_tetrimino(
	t_matrix *tetrimino, t_matrix *matrix, int start_row, int start_col)
{
	int	row;
	int	col;

	row = -1;
	col = -1;
	while (++row < (int)tetrimino->height)
	{
		while (++col < (int)tetrimino->width)
		{
			ft_matrixset(tetrimino, row, col,
				ft_matrixget(matrix, start_row + row, start_col + col));
		}
		col = -1;
	}
}

t_matrix		*trim_tetrimino(t_matrix *matrix)
{
	int			start_row;
	int			start_col;
	t_matrix	*tetrimino;

	start_row = -1;
	start_col = -1;
	tetrimino = new_trimmed_tetrimino(matrix, &start_row, &start_col, -1);
	fill_tetrimino(tetrimino, matrix, start_row, start_col);
	// free(matrix->data);
	// free(matrix);
	// matrix = NULL;
	// DEBUG
	ft_putstr("After filling:\n");
	ft_putmatrix(tetrimino);
	ft_putstr("===\n");
	return (tetrimino);
}
