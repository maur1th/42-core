/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/18 10:18:04 by tmaurin           #+#    #+#             */
/*   Updated: 2015/09/18 10:18:06 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree	*buf;

	buf = (t_btree*)malloc(sizeof(*buf));
	if (buf)
	{
		buf->right = 0;
		buf->left = 0;
		buf->item = item;
	}
	return (buf);
}
