/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_prefix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/18 10:26:08 by tmaurin           #+#    #+#             */
/*   Updated: 2015/09/19 07:56:26 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_prefix(t_btree *root, void (*applyf)(void *))
{
	applyf(root->item);
	if (root->left != 0)
		btree_apply_prefix(root->left, applyf);
	if (root->right != 0)
		btree_apply_prefix(root->right, applyf);
}
