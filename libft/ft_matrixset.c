/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mtxset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tm <tm@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 17:45:26 by tm                #+#    #+#             */
/*   Updated: 2015/12/12 12:09:41 by tm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_matrix	*ft_matrixset(t_matrix *matrix, size_t row, size_t col, char value)
{
	char	*data;

	if (row * col > (matrix->height - 1) * (matrix->width - 1))
		return (NULL);
	data = matrix->data;
	data[col + row * matrix->width] = value;
	return (matrix);
}
