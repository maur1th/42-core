/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtonizzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/19 11:29:51 by vtonizzo          #+#    #+#             */
/*   Updated: 2015/09/19 12:06:56 by vtonizzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colle02.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -nbr;
	}
	else if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else
		ft_putchar(nbr + 48);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_print(int colle, int line, int col)
{
	ft_putstr("[colle-0");
	ft_putnbr(colle);
	ft_putstr("] [");
	ft_putnbr(line);
	ft_putstr("] [");
	ft_putnbr(col);
	ft_putstr("]");
}
