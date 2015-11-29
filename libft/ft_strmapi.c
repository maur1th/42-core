/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tm <tm@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 00:27:14 by tm                #+#    #+#             */
/*   Updated: 2015/11/30 00:34:14 by tm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*dst;
	size_t	i;

	dst = ft_strnew((size_t)ft_strlen(s));
	i = -1;
	while (s[++i] != '\0')
	{
		dst[i] = f(i, s[i]);
	}
	return(dst);
}
