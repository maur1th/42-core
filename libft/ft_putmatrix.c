/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putmatrix.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tm <tm@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 20:12:55 by tm                #+#    #+#             */
/*   Updated: 2016/01/27 00:27:10 by tm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putmatrix(t_matrix *matrix)
{
	char	*orig;
	char	*data;

	orig = matrix->data;
	data = orig;
	while (*data != '\0')
	{
		ft_putchar(*(data++));
		if ((data - orig) % matrix->width == 0)
			ft_putchar('\n');
	}
}