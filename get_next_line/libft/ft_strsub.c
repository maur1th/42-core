/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 00:42:04 by tm                #+#    #+#             */
/*   Updated: 2015/12/05 16:07:18 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*dst;

	if (!(dst = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	ft_strncpy(dst, s + start, len);
	dst[len] = '\0';
	return (dst);
}
