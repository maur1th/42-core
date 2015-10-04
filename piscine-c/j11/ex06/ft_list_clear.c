/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/16 17:25:46 by tmaurin           #+#    #+#             */
/*   Updated: 2015/09/16 17:25:48 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list	*node;
	t_list	*buf;

	if (!(*begin_list))
		return ;
	node = *begin_list;
	while (node)
	{
		buf = node;
		node = node->next;
		free(buf);
	}
	*begin_list = NULL;
}
