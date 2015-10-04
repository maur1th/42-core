/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/15 15:17:01 by tmaurin           #+#    #+#             */
/*   Updated: 2015/09/15 15:30:29 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int		i;
	int		order;

	i = 0;
	while (tab[i] == tab[i + 1] && i < length - 1)
		i += 1;
	order = f(tab[i], tab[i + 1]);
	while (i < length - 1)
	{
		if ((order < 0 && f(tab[i], tab[i + 1]) > 0) ||
			(order > 0 && f(tab[i], tab[i + 1]) < 0))
			return (0);
		i += 1;
	}
	return (1);
}
