/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_setmatrixval.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tm <tm@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/05 00:41:22 by tm                #+#    #+#             */
/*   Updated: 2015/12/05 00:44:36 by tm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_setmatrixval(char *matrix, int row, int col, char val)
{
	size_t	size;

	size = ft_sqrt(ft_strlen(matrix));
	matrix[row + col * size] = val;
}
