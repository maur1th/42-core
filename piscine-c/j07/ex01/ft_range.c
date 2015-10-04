/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/10 11:06:57 by tmaurin           #+#    #+#             */
/*   Updated: 2015/09/10 11:13:35 by tmaurin          ###   ########.fr       */
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
