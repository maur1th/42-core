/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mtxset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tm <tm@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 17:45:26 by tm                #+#    #+#             */
/*   Updated: 2015/12/11 17:45:49 by tm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_mtx	*ft_mtxset(t_mtx *mtx, size_t row, size_t col, char value)
{
	char	*data;

	if (row * col > mtx->size * mtx->size)
		return NULL;
	data = mtx->data;
	data[row + col * mtx->size] = value;
	return mtx;
}
