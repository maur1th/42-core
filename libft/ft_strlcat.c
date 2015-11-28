/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 10:19:09 by tmaurin           #+#    #+#             */
/*   Updated: 2015/11/28 10:19:12 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	length;

	length = ft_strlen(src) + ft_strlen(dst);
	while (size != 0 && *dst != '\0')
	{
		dst += 1;
		size -= 1;
	}

	while (*src != '\0' && size != 1)
	{
		*(dst++) = *(src++);
		size -= 1;
	}

	return length;
}
