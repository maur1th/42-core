/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/20 11:37:49 by tmaurin           #+#    #+#             */
/*   Updated: 2015/09/20 15:04:12 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <eval_expr.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
		ft_putchar(*(str++));
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
