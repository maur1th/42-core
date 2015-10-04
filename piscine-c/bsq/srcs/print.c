/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/21 10:29:03 by tmaurin           #+#    #+#             */
/*   Updated: 2015/09/24 14:11:13 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsq.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

void	ft_print(int nb)
{
	if (nb < 10)
	{
		ft_putchar('0' + nb);
	}
	else
	{
		ft_print(nb / 10);
		ft_print(nb % 10);
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putstr("-2147483648");
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	ft_print(nb);
}
