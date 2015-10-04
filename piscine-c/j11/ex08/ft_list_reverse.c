/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/16 22:40:15 by tmaurin           #+#    #+#             */
/*   Updated: 2015/09/17 20:21:53 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list		*root;
	t_list		*new_root;
	t_list		*next_ptr;

	root = *begin_list;
	new_root = 0;
	while (root != 0)
	{
		next_ptr = root->next;
		root->next = new_root;
		new_root = root;
		root = next_ptr;
	}
	*begin_list = new_root;
}
