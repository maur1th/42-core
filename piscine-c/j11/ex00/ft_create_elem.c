/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/16 10:49:54 by tmaurin           #+#    #+#             */
/*   Updated: 2015/09/16 11:19:22 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list	*buf;

	buf = (t_list*)malloc(sizeof(*buf));
	if (buf)
	{
		buf->next = NULL;
		buf->data = data;
	}
	return (buf);
}
