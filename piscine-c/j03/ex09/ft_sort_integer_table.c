/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/05 22:06:37 by tmaurin           #+#    #+#             */
/*   Updated: 2015/09/05 22:56:36 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int		i;
	int		buf;

	buf = 1;
	while (buf != 0)
	{
		buf = 0;
		i = 0;
		while (i < size)
		{
			if (tab[i] > tab[i + 1])
			{
				buf = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = buf;
			}
			i += 1;
		}
	}
}
