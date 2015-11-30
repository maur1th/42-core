/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tm <tm@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 23:08:19 by tm                #+#    #+#             */
/*   Updated: 2015/11/30 23:27:06 by tm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*node;
	void	*content_buf;

	node = (t_list*)malloc(sizeof(t_list));
	content_buf = 0;
	if (content)
	{
		content_buf = (void*)malloc(content_size);
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
