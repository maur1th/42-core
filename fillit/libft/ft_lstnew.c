/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 23:08:19 by tm                #+#    #+#             */
/*   Updated: 2015/12/05 15:56:50 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*node;
	void	*content_buf;

	if (!(node = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	content_buf = 0;
	if (content)
	{
		if (!(content_buf = (void*)malloc(content_size)))
			return (NULL);
	}
	if (node)
	{
		node->content = content != NULL ?
			ft_memcpy(content_buf, content, content_size) : NULL;
		node->content_size = content != NULL ? content_size : 0;
		node->next = NULL;
	}
	return (node);
}
