/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mtxpad.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tm <tm@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 19:01:59 by tm                #+#    #+#             */
/*   Updated: 2015/12/12 12:09:43 by tm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_matrix	*ft_matrixpad(t_matrix *src, size_t height, size_t width)
{
	t_matrix	*dst;
	size_t	row;
	size_t	col;


	if (src->height > height || src->width > width)
		return (NULL);
	if (!(dst = ft_matrixnew(height, width)))
		return (NULL);
	row = 0;
	col = 0;
	while (src->data[row * src->width + col] != '\0')
	{
		if (src->data[row * src->width + col] == '1')
			ft_matrixset(dst, row, col, '1');
		if (++col == src->width)
		{
			col = 0;
			row += 1;
		}
	}
	return (dst);
}
