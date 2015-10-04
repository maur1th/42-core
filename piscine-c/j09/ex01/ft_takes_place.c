/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/10 20:11:17 by tmaurin           #+#    #+#             */
/*   Updated: 2015/09/10 20:11:21 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_putnbr(int nb)
{
	char	c;

	c = '0' + nb;
	if (nb < 10)
	{
		write(1, &c, 1);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

void	what_hour(int hour)
{
	if (hour % 12 != 0)
		ft_putnbr(hour % 12);
	else
		ft_putnbr(12);
	if (hour < 12)
		ft_putstr(".00 A.M.");
	else if (hour == 24)
		ft_putstr(".00 A.M.");
	else
		ft_putstr(".00 P.M.");
}

void	ft_takes_place(int hour)
{
	ft_putstr("THE FOLLOWING TAKES PLACE BETWEEN ");
	what_hour(hour);
	ft_putstr(" AND ");
	what_hour((hour + 1) % 24);
	ft_putstr("\n");
}
