/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tm <tm@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 15:56:28 by tmaurin           #+#    #+#             */
/*   Updated: 2015/12/02 14:38:09 by tm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	while (n-- != 0)
	{
		*(char*)dst = *(char*)src;
		if (*(char*)src == (char)c)
		{
			return (dst + 1);
		}
		dst += 1;
		src += 1;
	}
	return (0);
}
