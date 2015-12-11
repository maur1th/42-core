/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putmtx.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tm <tm@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 20:12:55 by tm                #+#    #+#             */
/*   Updated: 2015/12/11 18:38:30 by tm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putmtx(t_mtx *mtx)
{
	char	*d0;
	char	*data;

	d0 = mtx->data;
	data = d0;
	while (*data != '\0')
	{
		ft_putchar(*(data++));
		if ((data - d0) % mtx->width == 0)
		{
			ft_putchar('\n');
		}
		else
		{
			ft_putchar(' ');
		}
	}
}
