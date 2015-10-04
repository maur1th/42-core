/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sqr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/22 11:15:48 by tmaurin           #+#    #+#             */
/*   Updated: 2015/09/24 14:10:34 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsq.h>

int		sqr_is_valid(t_tile *tile, t_sqr *sqr, t_obs *obs, int *shift)
{
	int		rgt_bound;
	int		btm_bound;
	int		i;

	rgt_bound = sqr->x + sqr->size;
	btm_bound = sqr->y + sqr->size;
	if (rgt_bound > tile->wdth || btm_bound > tile->hght)
	{
		*shift += tile->wdth - sqr->x;
		return (0);
	}
	i = obs->length;
	while (--i >= 0)
	{
		if (((obs->x)[i] >= sqr->x && (obs->x)[i] < rgt_bound)
			&& ((obs->y)[i] >= sqr->y && (obs->y)[i] < btm_bound))
		{
			*shift += (obs->x)[i] - sqr->x + 1;
			return (0);
		}
	}
	return (1);
}

void	cpy_solution(t_sqr *temp, t_sqr *solution)
{
	if (solution->size != 0)
		if (temp->size <= solution->size)
			return ;
	solution->x = temp->x;
	solution->y = temp->y;
	solution->size = temp->size;
}

int		find_solution(t_tile *tile, t_obs *obs, t_sqr *solution)
{
	t_sqr	*temp;
	int		shift;
	int		pos;

	temp = (t_sqr*)malloc(sizeof(*temp));
	pos = tile->hght * tile->wdth;
	temp->size = 1;
	shift = 0;
	while (shift < pos)
	{
		temp->x = shift % tile->wdth;
		temp->y = shift / tile->wdth;
		while (sqr_is_valid(tile, temp, obs, &shift))
			temp->size += 1;
		temp->size = max(temp->size - 1, solution->size);
		cpy_solution(temp, solution);
	}
	free(temp);
	return (0);
}
