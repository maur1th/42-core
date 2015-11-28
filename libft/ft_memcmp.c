/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 16:26:28 by tmaurin           #+#    #+#             */
/*   Updated: 2015/11/28 16:40:31 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1x, const void *s2x, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char*)s1x;
	s2 = (unsigned char*)s2x;
	while (n-- != 0)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1 += 1;
		s2 += 1;
	}
	return (0);
}
