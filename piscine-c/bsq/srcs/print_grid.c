/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_grid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouder <tbouder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/21 13:16:53 by tbouder           #+#    #+#             */
/*   Updated: 2015/09/24 14:11:17 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsq.h>

void	print_grid(t_tile *tile, t_obs *obs, t_sqr *sqr)
{
	int		rgt_bound;
	int		btm_bound;
	int		i;
	int		j;

	rgt_bound = sqr->x + sqr->size;
	btm_bound = sqr->y + sqr->size;
	i = -1;
	j = 0;
	while (++i < (tile->hght * tile->wdth))
	{
		if ((i / tile->wdth) == (obs->y)[min(j, obs->length - 1)]
			&& (i % tile->wdth) == (obs->x)[min(j, obs->length - 1)])
		{
			ft_putchar(tile->obs);
			j += 1;
		}
		else if (i % tile->wdth < rgt_bound && i % tile->wdth >= sqr->x
			&& i / tile->wdth < btm_bound && i / tile->wdth >= sqr->y)
			ft_putchar(tile->sqr);
		else
			ft_putchar(tile->clr);
		if (((i + 1) % tile->wdth) == 0)
			ft_putstr("\n");
	}
}
