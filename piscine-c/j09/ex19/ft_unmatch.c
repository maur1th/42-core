/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/11 15:58:36 by tmaurin           #+#    #+#             */
/*   Updated: 2015/09/11 15:58:37 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int		i;
	int		j;
	int		temp;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

int		ft_unmatch(int *tab, int length)
{
	int		i;

	i = 0;
	ft_sort_integer_table(tab, length);
	while (i < length)
	{
		if (tab[i] == tab[i + 1])
			i += 2;
		else
			return (tab[i]);
	}
	return (0);
}
