/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/08 22:09:11 by tmaurin           #+#    #+#             */
/*   Updated: 2015/09/08 22:09:13 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strncat(char *dest, const char *src, size_t nb)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(dest);
	i = 0;
	while (i < nb)
	{
		dest[len + i] = src[i];
		i += 1;
	}
	dest[len + i] = '\0';
	return (dest);
}
