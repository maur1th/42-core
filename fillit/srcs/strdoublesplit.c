/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdoublesplit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Genevieve <Genevieve@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/12 16:29:54 by tm                #+#    #+#             */
/*   Updated: 2015/12/22 00:26:43 by Genevieve        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int		count_words(const char *s, char c)
{
	int		i;

	if (*s == '\0')
		return (0);
	i = 0;
	if (*s != c)
		s += 1;
	while (*s != '\0')
	{
		if (*s != c && *(s - 1) == c)
			i += 1;
		else if (*s == c && *(s + 1) == c)
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
	if (!(buf = (char *)malloc(sizeof(*buf) * i + 1)))
		return (NULL);
	i = 0;
	while (s[i] != c && s[i] != '\0')
	{
		buf[i] = s[i];
		i += 1;
	}
	buf[i] = '\0';
	return (buf);
}

char			**strdoublesplit(char const *s)
{
	char	**tab;
	int		i;

	if (!(tab = (char **)malloc(sizeof(char*) * (count_words(s, '\n') + 1))))
		return (NULL);
	i = 0;
	if (*s && *s != '\n')
		tab[i++] = get_word(s++, '\n');
	else if (*s == '\n')
		tab[i++] = "\0";
	while (*s != '\0')
	{
		if (*s != '\n' && *(s - 1) == '\n')
			tab[i++] = get_word(s, '\n');
		else if (*s == '\n' && *(s + 1) == '\n')
			tab[i++] = "\0";
		s += 1;
	}
	tab[i] = NULL;
	return (tab);
}
