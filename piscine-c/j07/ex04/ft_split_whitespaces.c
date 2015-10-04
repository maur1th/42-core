/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/11 19:21:54 by exam              #+#    #+#             */
/*   Updated: 2015/09/11 20:10:33 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_alpha(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (0);
	return (1);
}

int		count_words(char *str)
{
	int		i;

	i = 0;
	if (*str == '\0')
		return (0);
	if (is_alpha(*(str++)))
		i += 1;
	while (*str != '\0')
	{
		if (is_alpha(*str) && !is_alpha(*(str - 1)))
			i += 1;
		str += 1;
	}
	return (i);
}

char	*get_word(char *str)
{
	char	*buf;
	int		i;

	i = 0;
	while (is_alpha(str[i]) && str[i] != '\0')
		i += 1;
	buf = (char *)malloc(sizeof(*buf) * i + 1);
	i = 0;
	while (is_alpha(str[i]) && str[i] != '\0')
	{
		buf[i] = str[i];
		i += 1;
	}
	buf[i] = '\0';
	return (buf);
}

char	**ft_split_whitespaces(char *str)
{
	char	**tab;
	int		i;

	tab = (char **)malloc(sizeof(str) * (count_words(str) + 1));
	i = 0;
	if (is_alpha(*str))
		tab[i++] = get_word(str++);
	while (*str != '\0')
	{
		if (is_alpha(*str) && !is_alpha(*(str - 1)))
			tab[i++] = get_word(str);
		str += 1;
	}
	tab[i] = NULL;
	return (tab);
}
