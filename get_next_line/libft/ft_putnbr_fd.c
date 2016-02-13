/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tm <tm@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/25 11:14:58 by tmaurin           #+#    #+#             */
/*   Updated: 2016/01/27 01:15:21 by tm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	convert(int nb, int fd)
{
	if (nb < 10)
	{
		ft_putchar_fd('0' + nb, fd);
	}
	else
	{
		convert(nb / 10, fd);
		convert(nb % 10, fd);
	}
}

void		ft_putnbr_fd(int nb, int fd)
{
	if (nb == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else
	{
		if (nb < 0)
		{
			ft_putchar_fd('-', fd);
			nb = -nb;
		}
		convert(nb, fd);
	}
}
