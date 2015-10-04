/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle_2.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/08 18:11:13 by tmaurin           #+#    #+#             */
/*   Updated: 2015/09/08 18:22:00 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		is_valid(int *tab, int x, int y)
{
	int		i;

	i = 0;
	while (i < x)
	{
		if (tab[i] == y || y - x - (tab[i] - i) == 0
				|| x + y - i - tab[i] == 0)
			return (0);
		i += 1;
	}
	return (1);
}

void	ft_print_tab(int *tab)
{
	int		i;

	i = 0;
	while (i < 8)
		ft_putchar(tab[i++] + '1');
	ft_putchar('\n');
}

void	ft_solve(int *tab, int x)
{
	int		y;

	y = 0;
	while (y < 8)
	{
		if (is_valid(tab, x, y))
		{
			tab[x] = y;
			if (x == 7)
				ft_print_tab(tab);
			else
				ft_solve(tab, x + 1);
		}
		y += 1;
	}
}

void	ft_eight_queens_puzzle_2(void)
{
	int		tab[8];

	ft_solve(tab, 0);
}
