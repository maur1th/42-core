/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tm <tm@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 16:26:28 by tmaurin           #+#    #+#             */
/*   Updated: 2015/12/02 14:46:29 by tm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n-- != 0)
	{
		if (*(unsigned char*)s1 != *(unsigned char*)s2)
		{
			return (*(unsigned char*)s1 - *(unsigned char*)s2);
		}
		s1 += 1;
		s2 += 1;
	}
	return (0);
}
