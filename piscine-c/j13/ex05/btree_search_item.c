/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/19 18:10:45 by tmaurin           #+#    #+#             */
/*   Updated: 2015/09/19 18:10:45 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,
		int (*cmpf)(void *, void *))
{
	t_btree		*node;

	node = root;
	if (node == 0)
		return (NULL);
	else if (btree_search_item(node->left, data_ref, cmpf) != 0)
		return (btree_search_item(node->left, data_ref, cmpf));
	else
	{
		if (cmpf(node->item, data_ref) == 0)
			return (node->item);
		else if (btree_search_item(node->right, data_ref, cmpf) != 0)
			return (btree_search_item(node->right, data_ref, cmpf));
	}
	return (0);
}
