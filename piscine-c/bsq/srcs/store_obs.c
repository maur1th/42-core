/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   store_obs.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouder <tbouder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/21 13:16:53 by tbouder           #+#    #+#             */
/*   Updated: 2015/09/24 14:11:22 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsq.h>

t_obs	*store_obs(char *grid, t_tile *tile, t_obs *obs, int obs_nb)
{
	int		i;
	int		x;
	int		y;

	obs = (t_obs*)malloc(sizeof(t_obs));
	obs->x = (int*)malloc(sizeof(int) * obs_nb);
	obs->y = (int*)malloc(sizeof(int) * obs_nb);
	x = 0;
	y = 0;
	i = 0;
	while (*grid != '\0')
	{
		if (*(grid++) == '\n')
		{
			x = -1;
			y += 1;
		}
		else if (*(grid - 1) == tile->obs)
		{
			(obs->x)[i] = x;
			(obs->y)[i++] = y;
		}
		x += 1;
	}
	return (obs);
}
