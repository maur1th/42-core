/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 23:28:50 by tm                #+#    #+#             */
/*   Updated: 2015/12/05 10:35:05 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*s;

	s = (char*)ft_memalloc(size + 1);
	if (!s)
	{
		return (NULL);
	}
	ft_memset(s, '\0', size + 1);
	return (s);
}
