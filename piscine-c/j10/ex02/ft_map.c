/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/15 13:49:17 by tmaurin           #+#    #+#             */
/*   Updated: 2015/09/15 13:49:19 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int		*result;
	int		i;

	result = (int*)malloc(sizeof(*result) * length);
	i = 0;
	while (i < length)
	{
		result[i] = f(tab[i]);
		i += 1;
	}
	return (result);
}
