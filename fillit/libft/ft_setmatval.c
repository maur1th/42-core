/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_setmatval.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tm <tm@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/05 10:48:12 by tmaurin           #+#    #+#             */
/*   Updated: 2015/12/11 15:29:46 by tm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_matrix	*ft_setmatval(t_matrix *matrix, size_t row, size_t col, char value)
{
	char	*data;

	if (row * col > matrix->size * matrix->size)
		return NULL;
	data = matrix->data;
	data[row + col * matrix->size] = value;
	return matrix;
}
