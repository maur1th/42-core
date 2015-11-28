/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 16:17:09 by tmaurin           #+#    #+#             */
/*   Updated: 2015/11/28 16:35:37 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s0, int c, size_t n)
{
	unsigned char	*s;

	s = (unsigned char*)s0;
	while (n-- != 0)
	{
		if (*s == c)
		{
			return (s);
		}
		s += 1;
	}
	return (0);
}
