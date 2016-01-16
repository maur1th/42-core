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

#include <stdio.h>
#include <libft.h>
#include <fillit.h>

int				check_empty_col(t_matrix *matrix, int row)
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

int				check_empty_row(t_matrix *matrix, int col)
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

t_matrix		*trim_tetrimino(t_matrix *matrix)
{
	int			i;
	int			empty_cols;
	int			empty_rows;
	int			start_x;
	int			start_y;
	// char		fill;
	t_matrix	*tetrimino;

	i = 0;
	empty_cols = 0;
	empty_rows = 0;
	start_x = -1;
	start_y = -1;
	while (i < TT_WIDTH)
	{
		if (check_empty_col(matrix, i))
			empty_cols++;
		else if (start_x == -1)
			start_x = i;
		i++;
	}
	i = 0;
	while (i < TT_HEIGHT)
	{
		if (check_empty_row(matrix, i))
			empty_rows++;
		else if (start_y == -1)
			start_y = i;
		i++;
	}
	tetrimino = ft_matrixnew(TT_HEIGHT - empty_rows, TT_WIDTH - empty_cols);
	printf("new trimmed should be %d x %d\n", TT_HEIGHT - empty_rows, TT_WIDTH - empty_cols);
	// fill = ft_matrixget(matrix, start_x, start_y);
	// ft_matrixset(tetrimino, start_x, start_y, fill);

	int	x;
	int	y;
	x = 0;
	y = 0;
	while (x < (TT_HEIGHT - empty_rows))
	{
		ft_putnbr(x);
		ft_putchar('\n');
		while (y < (TT_WIDTH - empty_cols))
		{
			ft_matrixset(tetrimino, x, y, ft_matrixget(matrix, start_x + x, start_y + y));
			// start_x++;
			// start_y++;
			y++;
		}
		x++;
	}
	// fill = ft_matrixget(matrix, start_x, start_y);
	// ft_matrixset(tetrimino, x, y, fill);
	// printf("fill: %c\n", fill);
	// printf("start_x : %d start_y : %d\n", start_x, start_y);
	ft_putmatrix(tetrimino);
	return (tetrimino);
}
