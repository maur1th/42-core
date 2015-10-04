/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/13 17:30:12 by tmaurin           #+#    #+#             */
/*   Updated: 2015/09/13 23:24:39 by aschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colle01.h"

/*
** Min number of givens from: https://en.wikipedia.org/wiki/Sudoku
** and http://arxiv.org/abs/1201.0749
*/

int		initial_check(int **grid)
{
	int		y;
	int		x;
	int		givens;

	y = 0;
	x = 0;
	givens = 0;
	while (y < 9)
	{
		while (x < 9)
		{
			if (is_valid(grid, y, x, 0) == 0 && grid[y][x] != 0)
				return (0);
			if (grid[y][x] != 0)
				givens += 1;
			x += 1;
		}
		y += 1;
		x = 0;
	}
	if (givens < 17)
		return (0);
	return (1);
}

int		*convert_arg(char *str)
{
	int		i;
	int		*line;

	line = (int*)malloc(sizeof(int) * 9);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '1' && str[i] <= '9')
			line[i] = str[i] - '0';
		else if (str[i] == '.')
			line[i] = 0;
		else
			line[0] = -1;
		i += 1;
	}
	if (i != 9)
		line[0] = -1;
	return (line);
}

int		create_grid(int **grid, int argc, char **argv)
{
	int		i;

	i = 0;
	if (argc != 10)
		return (0);
	while (i < 9)
	{
		grid[i] = convert_arg(argv[i + 1]);
		if (grid[i][0] == -1)
			return (0);
		i += 1;
	}
	if (!initial_check(grid))
		return (0);
	return (1);
}
