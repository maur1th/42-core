/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 00:08:12 by tm                #+#    #+#             */
/*   Updated: 2015/12/01 22:53:55 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*dst;
	char	*orig;

	dst = ft_strnew((size_t)ft_strlen(s));
	if (!dst)
	{
		return (NULL);
	}
	orig = dst;
	while (*s != '\0')
	{
		*(dst++) = f(*(s++));
	}
	return (orig);
}
