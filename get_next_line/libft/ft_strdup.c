/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/25 17:42:58 by tmaurin           #+#    #+#             */
/*   Updated: 2015/12/05 16:00:22 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>

char	*ft_strdup(const char *s)
{
	char	*ptr;

	if (!(ptr = (char*)malloc(sizeof(*ptr) * (ft_strlen(s) + 1))))
		return (NULL);
	ft_strcpy(ptr, s);
	return (ptr);
}
