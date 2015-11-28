/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/08 13:44:11 by tmaurin           #+#    #+#             */
/*   Updated: 2015/11/28 17:21:02 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s1[i] != '\0' && s2 && n != 0)
	{
		while (s1[i + j] == s2[j])
		{
			if (s2[j + 1] == '\0')
				return ((char*)(&s1[i]));
			else if (s1[i + j + 1] == '\0')
				return (0);
			j += 1;
		}
		j = 0;
		i += 1;
		n -= 1;
	}
	return (s2[0] == '\0' ? (char*)s1 : 0);
}
