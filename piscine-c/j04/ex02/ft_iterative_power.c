/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/07 10:34:54 by tmaurin           #+#    #+#             */
/*   Updated: 2015/09/07 10:47:08 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int		result;
	int		i;

	i = 0;
	result = 1;
	if (power < 0)
		return (0);
	while (i < power)
	{
		result *= nb;
		i += 1;
	}
	return (result);
}
