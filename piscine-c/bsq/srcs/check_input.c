/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouder <tbouder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/21 13:16:53 by tbouder           #+#    #+#             */
/*   Updated: 2015/09/24 14:10:30 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsq.h>

int		check_len_line(t_tile *tile, char *grid, int ref)
{
	int		i;
	int		line;
	int		nb_line;

	i = 0;
	line = 0;
	nb_line = 0;
	while (grid[i])
	{
		line++;
		if ((grid[i + 1] == '\n' || grid[i + 1] == '\0') && line != ref)
			return (1);
		else if ((grid[i + 1] == '\n' || grid[i + 1] == '\0') && line == ref)
		{
			nb_line++;
			line = 0;
			i++;
		}
		i++;
	}
	if (nb_line == tile->hght)
		return (0);
	return (1);
}

int		check_original_chars(char *grid, t_tile *tile, int *obs_nb)
{
	int		i;
	int		clear;

	i = 0;
	clear = 0;
	*obs_nb = 0;
	while (grid[i])
	{
		if (grid[i] == '\n' || grid[i] == tile->obs)
		{
			*obs_nb = grid[i] == tile->obs ? *obs_nb + 1 : *obs_nb;
			i++;
		}
		else if (grid[i] == tile->clr)
		{
			i++;
			clear++;
		}
		else
			return (1);
	}
	if (clear == 0)
		return (1);
	return (0);
}

int		all_checks(char *first, char *grid, t_tile *tile, int *obs_nb)
{
	extr_char(first, tile);
	tile->wdth = line_len(grid);
	tile->hght = extr_nb_lines(first);
	if (check_len_line(tile, grid, line_len(grid))
		|| check_original_chars(grid, tile, obs_nb) || tile->hght == 0
		|| tile->wdth == 0 || tile->sqr == tile->clr
		|| tile->obs == tile->clr)
	{
		write(2, "map error\n", 10);
		free(tile);
		return (0);
	}
	return (1);
}
