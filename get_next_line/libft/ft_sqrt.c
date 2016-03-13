/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tm <tm@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/07 17:06:28 by tmaurin           #+#    #+#             */
/*   Updated: 2015/12/04 20:23:29 by tm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t		ft_sqrt(size_t nb)
{
	size_t		i;

	i = 0;
	while (i * i < nb)
		i += 1;
	if (i * i == nb)
		return (i);
	else
		return (0);
}