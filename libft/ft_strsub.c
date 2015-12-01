/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 00:42:04 by tm                #+#    #+#             */
/*   Updated: 2015/12/01 20:29:25 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*dst;

	dst = (char*)malloc(sizeof(char) * (len + 1));
	if (!dst)
	{
		return (NULL);
	}
	ft_strncpy(dst, s + start, len);
	return (dst);
}
