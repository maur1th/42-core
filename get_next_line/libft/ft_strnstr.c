/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/08 13:44:11 by tmaurin           #+#    #+#             */
/*   Updated: 2015/12/01 20:24:02 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	while (s1[i] != '\0' && s2)
	{
		while (s1[i + j] == s2[j] && i + j < n)
		{
			if (s2[j + 1] == '\0')
				return ((char*)(&s1[i]));
			else if (s1[i + j + 1] == '\0')
				return (0);
			j += 1;
		}
		j = 0;
		i += 1;
	}
	return (s2[0] == '\0' ? (char*)s1 : 0);
}
