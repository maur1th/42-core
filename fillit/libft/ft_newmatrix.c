/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newmatrix.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tm <tm@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 20:06:44 by tm                #+#    #+#             */
/*   Updated: 2015/12/11 15:41:59 by tm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_matrix	*ft_newmatrix(size_t size)
{
	t_matrix	*matrix;

	if(!(matrix = (t_matrix*)malloc(sizeof(t_matrix))))
		return (NULL);
	if (!(matrix->data = (char*)malloc(sizeof(char) * (size * size + 1))))
		return (NULL);
	ft_memset(matrix->data, '0', size * size);
	matrix->data[size * size] = '\0';
	matrix->size = size;
	return (matrix);
}
