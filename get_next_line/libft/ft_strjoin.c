/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tm <tm@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 00:43:03 by tm                #+#    #+#             */
/*   Updated: 2016/03/20 19:04:28 by tm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dst;

	dst = (char*)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!dst)
		return (NULL);
	ft_strcpy(dst, s1);
	ft_strcpy(&dst[ft_strlen(s1)], s2);
	dst[ft_strlen(s1) + ft_strlen(s2)] = '\0';
	return (dst);
}
