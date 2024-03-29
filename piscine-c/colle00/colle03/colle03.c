/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle03.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/05 10:28:18 by tmaurin           #+#    #+#             */
/*   Updated: 2015/09/06 00:53:22 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_headfoot(int wdth)
{
	int		x_pos;

	x_pos = 1;
	while (x_pos <= wdth)
	{
		if (x_pos == 1)
			ft_putchar('A');
		else if (x_pos == wdth)
			ft_putchar('C');
		else
			ft_putchar('B');
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
			ft_putchar('B');
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
		if (y_pos == 1 || y_pos == hght)
			print_headfoot(wdth);
		else
			print_body(wdth);
		y_pos++;
		ft_putchar('\n');
	}
}
