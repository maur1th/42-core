/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/26 10:49:04 by exam              #+#    #+#             */
/*   Updated: 2015/09/26 11:07:08 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_min(int n1, int n2)
{
	return (n1 < n2 ? n1 : n2);
}

int		*ft_range(int start, int end)
{
	int		*range;
	int		min;
	int		max;
	int		i;

	min = ft_min(start, end);
	max = min == start ? end : start;
	range = (int*)malloc(sizeof(int) * (max - min + 1));
	i = 0;
	if (start < end)
	{
		while (start <= end)
			range[i++] = start++;
	}
	else
	{
		while (end <= start)
			range[i++] = start--;
	}
	return (range);
}
