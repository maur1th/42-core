/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launcher.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouder <tbouder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/21 13:16:53 by tbouder           #+#    #+#             */
/*   Updated: 2015/09/24 14:10:59 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsq.h>

int		launcher(char *first, char *grid)
{
	t_tile	*tile;
	t_obs	*obs;
	t_sqr	*solution;
	int		obs_nb;

	tile = (t_tile*)malloc(sizeof(t_tile));
	solution = (t_sqr*)malloc(sizeof(*solution));
	obs = NULL;
	if (all_checks(first, grid, tile, &obs_nb) == 0)
		return (1);
	obs = store_obs(grid, tile, obs, obs_nb);
	free(first);
	free(grid);
	obs->length = obs_nb;
	solution->size = 0;
	find_solution(tile, obs, solution);
	print_grid(tile, obs, solution);
	free(tile);
	free(solution);
	free(obs->x);
	free(obs->y);
	free(obs);
	return (0);
}
