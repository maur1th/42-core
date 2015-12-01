/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 00:47:53 by tm                #+#    #+#             */
/*   Updated: 2015/12/01 20:29:08 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		is_whitespace(const char c)
{
	return (c == ' ' || c == '\n' || c == '\t' ? 1 : 0);
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
		{
			j += 1;
		}
		else
		{
			j = 0;
		}
		i += 1;
	}
	return (i - j);
}

char			*ft_strtrim(char const *s)
{
	char	*dst;

	dst = (char*)malloc(sizeof(char) * ft_strlen(s));
	if (!dst)
	{
		return (NULL);
	}
	while (is_whitespace(*s))
	{
		s += 1;
	}
	return (ft_strncpy(dst, s, trimmed_len(s)));
}
