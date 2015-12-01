/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 15:56:28 by tmaurin           #+#    #+#             */
/*   Updated: 2015/12/01 22:34:50 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst0, const void *src0, int c, size_t n)
{
	char	*src;
	char	*dst;

	src = (char*)src0;
	dst = (char*)dst0;
	while (n-- != 0)
	{
		*(dst) = *(src);
		if (*src == c)
		{
			return (dst + 1);
		}
		dst += 1;
		src += 1;
	}
	return (0);
}
