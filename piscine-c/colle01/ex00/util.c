/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/13 17:30:25 by tmaurin           #+#    #+#             */
/*   Updated: 2015/09/13 17:30:27 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colle01.h"

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		print_grid(int **grid)
{
	int		i;
	int		j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			ft_putchar(grid[i][j] + '0');
			if (j != 8)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

void		copy_grid(int **copy, int **grid)
{
	int		y;
	int		x;
	int		*line;

	y = 0;
	x = 0;
	while (y < 9)
	{
		line = (int*)malloc(sizeof(int) * 9);
		copy[y] = line;
		y++;
	}
	y = 0;
	while (y < 9)
	{
		while (x < 9)
		{
			copy[y][x] = grid[y][x];
			x++;
		}
		x = 0;
		y++;
	}
}
