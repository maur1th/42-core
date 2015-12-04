/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putmatrix.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tm <tm@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 20:12:55 by tm                #+#    #+#             */
/*   Updated: 2015/12/04 20:23:49 by tm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putmatrix(char *matrix)
{
	char	*m0;
	size_t	length;

	m0 = matrix;
	length = ft_sqrt(ft_strlen(matrix));
	while (*matrix != '\0')
	{
		ft_putchar(*(matrix++));
		if ((matrix - m0) % length == 0)
		{
			ft_putchar('\n');
		}
		else
		{
			ft_putchar(' ');
		}
	}
}
