/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mtxnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tm <tm@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 20:06:44 by tm                #+#    #+#             */
/*   Updated: 2015/12/11 17:48:39 by tm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_mtx	*ft_mtxnew(size_t size)
{
	t_mtx	*mtx;

	if(!(mtx = (t_mtx*)malloc(sizeof(t_mtx))))
		return (NULL);
	if (!(mtx->data = (char*)malloc(sizeof(char) * (size * size + 1))))
		return (NULL);
	ft_memset(mtx->data, '0', size * size);
	mtx->data[size * size] = '\0';
	mtx->size = size;
	return (mtx);
}
