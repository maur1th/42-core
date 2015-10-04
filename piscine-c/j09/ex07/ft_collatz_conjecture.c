/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/11 09:06:47 by tmaurin           #+#    #+#             */
/*   Updated: 2015/09/11 09:34:09 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				collatz_generator(unsigned int base, int length)
{
	length += 1;
	if (base == 1)
		return (length);
	else if (base % 2 == 0)
		return (collatz_generator(base / 2, length));
	else
		return (collatz_generator(base * 3 + 1, length));
}

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	unsigned int	length;

	length = 0;
	length = collatz_generator(base, length);
	return (length);
}
