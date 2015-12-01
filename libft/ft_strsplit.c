/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 00:49:23 by tm                #+#    #+#             */
/*   Updated: 2015/12/01 20:24:05 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		count_words(const char *s, char c)
{
	int		i;

	i = 0;
	if (*s == '\0')
		return (0);
	if (*(s++) != c)
		i += 1;
	while (*s != '\0')
	{
		if (*s != c && *(s - 1) == c)
			i += 1;
		s += 1;
	}
	return (i);
}

static char		*get_word(const char *s, char c)
{
	char	*buf;
	int		i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i += 1;
	buf = (char *)malloc(sizeof(*buf) * i + 1);
	i = 0;
	while (s[i] != c && s[i] != '\0')
	{
		buf[i] = s[i];
		i += 1;
	}
	buf[i] = '\0';
	return (buf);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		i;

	tab = (char **)malloc(sizeof(char*) * (count_words(s, c) + 1));
	i = 0;
	if (*s && *s != c)
		tab[i++] = get_word(s++, c);
	while (*s != '\0')
	{
		if (*s != c && *(s - 1) == c)
			tab[i++] = get_word(s, c);
		s += 1;
	}
	tab[i] = NULL;
	return (tab);
}
