/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_active_bits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/11 15:55:44 by tmaurin           #+#    #+#             */
/*   Updated: 2015/09/11 15:55:46 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				*convert(int nb, int *tab)
{
	if (nb == 1)
		tab[0] += 1;
	else if (nb > 1)
	{
		convert(nb / 2, tab);
		convert(nb % 2, tab);
	}
	return (tab);
}

unsigned int	ft_active_bits(int value)
{
	int		tab[1];
	int		nb;

	tab[0] = 0;
	if (value < 0)
		value = -value;
	convert(value, tab);
	nb = tab[0];
	return (nb);
}
