/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/16 14:58:24 by tmaurin           #+#    #+#             */
/*   Updated: 2015/09/16 15:21:58 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list		*node;

	node = ft_create_elem(data);
	node->next = *begin_list;
	*begin_list = node;
}
