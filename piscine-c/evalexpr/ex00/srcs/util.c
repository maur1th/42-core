/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/20 11:32:20 by tmaurin           #+#    #+#             */
/*   Updated: 2015/09/20 19:40:41 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <eval_expr.h>

int		is_num(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int		nb_length(char *expression)
{
	int		i;

	i = 0;
	while (is_num(*expression) && *expression != '\0')
	{
		i += 1;
		expression += 1;
	}
	return (i);
}

int		no_space_len(char *str)
{
	int		i;

	i = 0;
	while (*str != '\0')
		i = *str++ != ' ' ? i + 1 : i;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	while (*src != '\0')
	{
		if (*src == ' ')
			src++;
		else
			*(dest++) = *(src++);
	}
	*dest = *src;
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*ptr;

	ptr = (char*)malloc(sizeof(*ptr) * (no_space_len(src) + 1));
	ft_strcpy(ptr, src);
	return (ptr);
}
