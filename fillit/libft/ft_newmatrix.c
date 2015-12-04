/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newmatrix.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tm <tm@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 20:06:44 by tm                #+#    #+#             */
/*   Updated: 2015/12/04 20:19:44 by tm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_newmatrix(int size)
{
	char	*matrix;

	matrix = (char*)malloc(sizeof(char) * (size * size + 1));
	ft_memset(matrix, '0', size * size);
	matrix[size * size] = '\0';
	return (matrix);
}
