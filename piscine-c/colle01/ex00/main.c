/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbienven <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/12 18:58:04 by gbienven          #+#    #+#             */
/*   Updated: 2015/09/13 17:30:33 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colle01.h"

int		is_valid(int **grid, int y, int x, int val)
{
	int		i;
	int		x_sqr_coord;
	int		y_sqr_coord;

	if (val == 0)
		val = grid[y][x];
	i = 1;
	while (i <= 8)
	{
		x_sqr_coord = (x + i) % 3 + (x / 3) * 3;
		y_sqr_coord = (y + (x % 3 + i) / 3) % 3 + (y / 3) * 3;
		if (val == grid[(y + i) % 9][x]
			|| val == grid[y][(x + i) % 9]
				|| val == grid[y_sqr_coord][x_sqr_coord])
			return (0);
		i += 1;
	}
	return (1);
}

void	store_solutions(int **grid, int **copy, int cell_nb, int *solutions)
{
	if (cell_nb == 80)
	{
		*solutions += 1;
		copy_grid(copy, grid);
	}
}

void	ft_solve(int **grid, int **copy, int cell_nb, int *solutions)
{
	int		y;
	int		x;
	int		n;

	y = cell_nb / 9;
	x = cell_nb % 9;
	n = 1;
	if (cell_nb == 81)
		return ;
	while (n <= 9 && grid[y][x] == 0)
	{
		if (is_valid(grid, y, x, n))
		{
			grid[y][x] = n;
			store_solutions(grid, copy, cell_nb, solutions);
			ft_solve(grid, copy, cell_nb + 1, solutions);
			grid[y][x] = 0;
		}
		n += 1;
	}
	if (grid[y][x] != 0)
	{
		store_solutions(grid, copy, cell_nb, solutions);
		ft_solve(grid, copy, cell_nb + 1, solutions);
	}
}

int		main(int argc, char **argv)
{
	int		**grid;
	int		**copy;
	int		solutions;

	grid = (int**)malloc(sizeof(int*) * 9);
	copy = (int**)malloc(sizeof(int*) * 9);
	if (create_grid(grid, argc, argv) == 0)
	{
		write(1, "Erreur\n", 7);
		return (0);
	}
	solutions = 0;
	ft_solve(grid, copy, 0, &solutions);
	if (solutions != 1)
	{
		write(1, "Erreur\n", 7);
		return (0);
	}
	print_grid(copy);
	return (0);
}
