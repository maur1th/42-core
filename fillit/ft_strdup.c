/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/25 17:42:58 by tmaurin           #+#    #+#             */
/*   Updated: 2015/12/01 22:54:27 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;

	ptr = (char*)malloc(sizeof(*ptr) * (ft_strlen(s) + 1));
	if (!ptr)
	{
		return (NULL);
	}
	ft_strcpy(ptr, s);
	return (ptr);
}
