/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/08 15:54:16 by tmaurin           #+#    #+#             */
/*   Updated: 2015/12/01 22:37:00 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i + 1 < n && s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i += 1;
	return (n == 0 ? 0 : (unsigned char)(s1[i] - s2[i]));
}
