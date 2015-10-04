/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/10 10:48:34 by tmaurin           #+#    #+#             */
/*   Updated: 2015/09/24 14:10:47 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsq.h>

char	*ft_strcpy(char *dest, char *src)
{
	while (*src != '\0')
		*(dest++) = *(src++);
	*dest = *src;
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*ptr;

	ptr = (char*)malloc(sizeof(*ptr) * (ft_strlen(src) + 1));
	ft_strcpy(ptr, src);
	return (ptr);
}
