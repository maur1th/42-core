/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/11 13:54:02 by tmaurin           #+#    #+#             */
/*   Updated: 2015/09/11 13:54:03 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_max(int *tab, int length)
{
	int		i;
	int		result;

	i = 0;
	result = 0;
	while (i < length)
	{
		if (tab[i] > result)
			result = tab[i];
		i += 1;
	}
	return (result);
}
