/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newm.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 20:06:44 by tm                #+#    #+#             */
/*   Updated: 2015/12/05 16:32:20 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_newm(size_t size)
{
	t_matrix	*matrix;

	if (!(matrix = (char*)malloc(sizeof(char) * (size * size + 1))))
		return (NULL);
	ft_memset(matrix, '0', size * size);
	matrix[size * size] = '\0';
	return (matrix);
}
