/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/07 09:56:33 by tmaurin           #+#    #+#             */
/*   Updated: 2015/09/07 23:50:27 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		result;
	int		error;

	error = 0;
	result = 1;
	if (nb < 0 || nb > 12)
		error = 1;
	while (nb >= 1)
		result *= nb--;
	return (error ? 0 : result);
}
