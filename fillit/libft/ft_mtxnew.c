/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mtxnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tm <tm@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 20:06:44 by tm                #+#    #+#             */
/*   Updated: 2015/12/11 18:37:33 by tm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_mtx	*ft_mtxnew(size_t height, size_t width)
{
	t_mtx	*mtx;

	if(!(mtx = (t_mtx*)malloc(sizeof(t_mtx))))
		return (NULL);
	if (!(mtx->data = (char*)malloc(sizeof(char) * (height * width + 1))))
		return (NULL);
	ft_memset(mtx->data, '0', height * width);
	mtx->data[height * width] = '\0';
	mtx->height = height;
	mtx->width = width;
	return (mtx);
}
