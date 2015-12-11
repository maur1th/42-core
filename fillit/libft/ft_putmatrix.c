/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putmatrix.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tm <tm@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 20:12:55 by tm                #+#    #+#             */
/*   Updated: 2015/12/11 12:45:14 by tm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putmatrix(t_matrix *matrix)
{
	char	*d0;
	char	*data;

	d0 = matrix->data;
	data = d0;
	while (*data != '\0')
	{
		ft_putchar(*(data++));
		if ((data - d0) % matrix->size == 0)
		{
			ft_putchar('\n');
		}
		else
		{
			ft_putchar(' ');
		}
	}
}
