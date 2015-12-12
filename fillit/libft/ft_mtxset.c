/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mtxset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tm <tm@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 17:45:26 by tm                #+#    #+#             */
/*   Updated: 2015/12/11 18:56:12 by tm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_mtx	*ft_mtxset(t_mtx *mtx, size_t row, size_t col, char value)
{
	char	*data;

	if (row * col > (mtx->height - 1) * (mtx->width - 1))
		return NULL;
	data = mtx->data;
	data[col + row * mtx->width] = value;
	return mtx;
}