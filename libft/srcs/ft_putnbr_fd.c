/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/25 11:14:58 by tmaurin           #+#    #+#             */
/*   Updated: 2015/09/25 11:15:00 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static void		ft_print_fd(int nb, int fd)
{
	if (nb < 10)
	{
		ft_putchar_fd('0' + nb, fd);
	}
	else
	{
		ft_print_fd(nb / 10, fd);
		ft_print_fd(nb % 10, fd);
	}
}

void			ft_putnbr_fd(int nb, int fd)
{
	if (nb == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = -nb;
	}
	ft_print_fd(nb, fd);
}
