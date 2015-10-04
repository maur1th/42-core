/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/04 10:00:53 by tmaurin           #+#    #+#             */
/*   Updated: 2015/09/04 10:05:01 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_swap(int *a, int *b)
{
	int		buffer;

	buffer = *a;
	*a = *b;
	*b = buffer;
}
