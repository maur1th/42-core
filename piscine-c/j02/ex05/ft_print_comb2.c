/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/03 13:40:09 by tmaurin           #+#    #+#             */
/*   Updated: 2015/09/03 15:04:10 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_putchar(char c);

void	ft_putint(int number)
{
	if (number < 10)
	{
		ft_putchar('0');
		ft_putchar('0' + number);
	}
	else
	{
		ft_putchar('0' + number / 10);
		ft_putchar('0' + number % 10);
	}
}

void	ft_putpair(int first_int, int second_int)
{
	ft_putint(first_int);
	ft_putchar(' ');
	ft_putint(second_int);
	if (first_int != 98)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int		first_int;
	int		second_int;

	first_int = 0;
	second_int = 0;
	while (first_int < 99)
	{
		while (second_int <= 99)
		{
			if (first_int < second_int)
			{
				ft_putpair(first_int, second_int);
			}
			second_int++;
		}
		second_int = 0;
		first_int++;
	}
}
