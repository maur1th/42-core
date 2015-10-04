/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/03 17:03:09 by tmaurin           #+#    #+#             */
/*   Updated: 2015/09/03 22:35:24 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_putchar(char c);

void	ft_putnbr(int nb)
{
	if (nb < 10)
	{
		ft_putchar('0' + nb);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

int		do_print(int nb)
{
	while (nb > 10)
	{
		nb = nb / 10;
		


	if (nb < 10)
	{
		if (nb / 10 >= nb % 10)
			return 0;
	}
	else
	{

	}
int		ft_do_print(int nb)
{
	if (nb > 0)
		return (1);
	else
		return (0);
}

void	ft_print_combn(int n)
{
	int		max_nb;
	int		i;
	int		power;

	power = n;  // get max value
	max_nb = 10;
	while (power > 1)
	{
		max_nb = max_nb * 10;
		power--;
	}
	max_nb--;
	i = 0;
	while (i <= max_nb)
	{
		if (ft_do_print(i))
		{
			ft_putnbr(i);
			ft_putchar(',');
			ft_putchar(' ');
		}
		i++;
	}
}
