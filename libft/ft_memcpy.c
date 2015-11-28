/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 15:31:27 by tmaurin           #+#    #+#             */
/*   Updated: 2015/11/28 15:51:12 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst0, const void *src0, size_t n)
{
	char	*src;
	char	*dst;

	src = (char*)src0;
	dst = (char*)dst0;
	while (n-- != 0)
		*(dst++) = *(src++);
	return (dst0);
}
