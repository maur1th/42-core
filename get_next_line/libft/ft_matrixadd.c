/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mtxadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tm <tm@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 17:36:41 by tm                #+#    #+#             */
/*   Updated: 2015/12/12 12:09:52 by tm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_matrix	*ft_matrixadd(t_matrix *m1, t_matrix *m2)
{
	char	*s1;
	char	*s2;

	if (m1->height != m2->height || m1->width != m2->width)
		return (NULL);
	s1 = m1->data;
	s2 = m2->data;
	while (*s1 != '\0')
		*(s1++) += *(s2++) - '0';
	return (m1);
}