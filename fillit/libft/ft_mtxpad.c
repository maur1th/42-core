/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mtxpad.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tm <tm@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 19:01:59 by tm                #+#    #+#             */
/*   Updated: 2015/12/11 19:41:42 by tm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_mtx	*ft_mtxpad(t_mtx *src, size_t height, size_t width)
{
	t_mtx	*dst;
	size_t	row;
	size_t	col;


	if (src->height > height || src->width > width)
		return (NULL);
	if (!(dst = ft_mtxnew(height, width)))
		return (NULL);
	row = 0;
	col = 0;
	while (src->data[row * src->width + col] != '\0')
	{
		if (src->data[row * src->width + col] == '1')
			ft_mtxset(dst, row, col, '1');
		if (++col == src->width)
		{
			col = 0;
			row += 1;
		}
	}
	return (dst);
}
