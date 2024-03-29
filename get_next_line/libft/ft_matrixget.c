/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mtxget.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tm <tm@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 17:44:16 by tm                #+#    #+#             */
/*   Updated: 2015/12/12 12:09:49 by tm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	ft_matrixget(t_matrix *matrix, size_t row, size_t col)
{
	size_t	position;

	position = row * matrix->width + col;
	return (ft_strlen(matrix->data) > position ?
		matrix->data[row * matrix->width + col] : '\0');
}
