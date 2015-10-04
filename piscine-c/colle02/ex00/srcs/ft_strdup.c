/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/20 17:24:57 by tmaurin           #+#    #+#             */
/*   Updated: 2015/09/20 17:24:59 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <colle02.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	while (*src != '\0')
		*(dest++) = *(src++);
	*dest = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*ptr;

	ptr = (char*)malloc(sizeof(char) * ft_strlen(src) + 1);
	ft_strcpy(ptr, src);
	return (ptr);
}
