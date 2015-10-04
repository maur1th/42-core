/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/15 17:00:40 by tmaurin           #+#    #+#             */
/*   Updated: 2015/09/15 20:23:04 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <do_op.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
		write(1, str++, 1);
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
		ft_putstr("-");
		nb = -nb;
	}
	ft_print(nb);
}

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
