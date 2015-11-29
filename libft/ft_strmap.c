/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tm <tm@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 00:08:12 by tm                #+#    #+#             */
/*   Updated: 2015/11/30 00:35:48 by tm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*dst;
	char	*orig;

	dst = ft_strnew((size_t)ft_strlen(s));
	orig = dst;
	while (*s != '\0')
	{
		*(dst++) = f(*(s++));
	}
	return(orig);
}
