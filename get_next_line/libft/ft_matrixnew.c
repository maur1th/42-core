/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mtxnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tm <tm@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 20:06:44 by tm                #+#    #+#             */
/*   Updated: 2015/12/12 12:09:46 by tm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>

t_matrix	*ft_matrixnew(size_t height, size_t width)
{
	t_matrix	*matrix;

	if(!(matrix = (t_matrix*)malloc(sizeof(t_matrix))))
		return (NULL);
	if (!(matrix->data = (char*)malloc(sizeof(char) * (height * width + 1))))
		return (NULL);
	ft_memset(matrix->data, '0', height * width);
	matrix->data[height * width] = '\0';
	matrix->height = height;
	matrix->width = width;
	return (matrix);
}
