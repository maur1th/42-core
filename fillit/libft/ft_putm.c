/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putm.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 20:12:55 by tm                #+#    #+#             */
/*   Updated: 2015/12/05 10:54:42 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putm(char *matrix, size_t size)
{
	char	*m0;

	m0 = matrix;
	while (*matrix != '\0')
	{
		ft_putchar(*(matrix++));
		if ((matrix - m0) % size == 0)
		{
			ft_putchar('\n');
		}
		else
		{
			ft_putchar(' ');
		}
	}
}
