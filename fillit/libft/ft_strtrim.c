/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 00:47:53 by tm                #+#    #+#             */
/*   Updated: 2015/12/05 16:07:44 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static	int		is_whitespace(const char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

static size_t	trimmed_len(char const *s)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (*s)
	{
		if (is_whitespace(*(s++)))
			j += 1;
		else
			j = 0;
		i += 1;
	}
	return (i - j);
}

char			*ft_strtrim(char const *s)
{
	char	*dst;

	while (is_whitespace(*s))
		s += 1;
	if (!(dst = (char*)malloc(sizeof(char) * (trimmed_len(s) + 1))))
		return (NULL);
	dst = ft_strncpy(dst, s, trimmed_len(s));
	dst[trimmed_len(s)] = '\0';
	return (dst);
}
