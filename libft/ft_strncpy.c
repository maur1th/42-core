/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/08 12:32:13 by tmaurin           #+#    #+#             */
/*   Updated: 2015/12/01 20:23:59 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	unsigned int		i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dst[i] = src[i];
		i += 1;
	}
	if (i < n)
	{
		while (i < n)
		{
			dst[i] = '\0';
			i += 1;
		}
		dst[i] = '\0';
	}
	return (dst);
}
