/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/05 10:28:18 by tmaurin           #+#    #+#             */
/*   Updated: 2015/09/06 23:51:05 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_head(int wdth)
{
	int		x_pos;

	x_pos = 1;
	while (x_pos <= wdth)
	{
		if (x_pos == 1 || x_pos == wdth)
			ft_putchar('o');
		else
			ft_putchar('-');
		x_pos++;
	}
}

void	print_foot(int wdth)
{
	int		x_pos;

	x_pos = 1;
	while (x_pos <= wdth)
	{
		if (x_pos == 1 || x_pos == wdth)
			ft_putchar('o');
		else
			ft_putchar('-');
		x_pos++;
	}
}

void	print_body(int wdth)
{
	int		x_pos;

	x_pos = 1;
	while (x_pos <= wdth)
	{
		if (x_pos == 1 || x_pos == wdth)
			ft_putchar('|');
		else
			ft_putchar(' ');
		x_pos++;
	}
}

void	colle(int wdth, int hght)
{
	int		y_pos;

	y_pos = 1;
	while (y_pos <= hght)
	{
		if (y_pos == 1)
			print_head(wdth);
		else if (y_pos == hght)
			print_foot(wdth);
		else
			print_body(wdth);
		y_pos = y_pos + 1;
		ft_putchar('\n');
	}
}
