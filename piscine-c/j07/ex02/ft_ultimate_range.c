/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/10 11:37:42 by tmaurin           #+#    #+#             */
/*   Updated: 2015/09/10 11:37:50 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*tab;
	int		i;

	i = 0;
	tab = NULL;
	if (min >= max)
		return (tab);
	tab = (int*)malloc(sizeof(tab) * (max - min));
	while (min < max)
		tab[i++] = min++;
	return (tab);
}

int		ft_ultimate_range(int **range, int min, int max)
{
	*range = ft_range(min, max);
	return (max >= min ? max - min : 0);
}
