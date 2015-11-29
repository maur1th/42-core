/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 10:19:09 by tmaurin           #+#    #+#             */
/*   Updated: 2015/11/28 16:07:44 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*d0;
	size_t	length;

	d0 = dst;
	while (size != 0 && *dst != '\0')
	{
		dst += 1;
		size -= 1;
	}
	length = dst - d0 + ft_strlen(src);
	while (*src != '\0' && size > 1)
	{
		*(dst++) = *(src++);
		size -= 1;
	}
	return (length);
}
