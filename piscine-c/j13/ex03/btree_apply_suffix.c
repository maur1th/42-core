/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_suffix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/19 08:50:59 by tmaurin           #+#    #+#             */
/*   Updated: 2015/09/19 08:51:00 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_suffix(t_btree *root, void (*applyf)(void *))
{
	if (root->left != 0)
		btree_apply_suffix(root->left, applyf);
	if (root->right != 0)
		btree_apply_suffix(root->right, applyf);
	applyf(root->item);
}
