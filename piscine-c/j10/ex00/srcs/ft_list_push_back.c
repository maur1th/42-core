/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/16 11:29:16 by tmaurin           #+#    #+#             */
/*   Updated: 2015/09/16 15:27:01 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list		*ptr;

	ptr = *begin_list;
	if (!(*begin_list))
		*begin_list = ft_create_elem(data);
	else
	{
		while ((ptr)->next)
		{
			ptr = ptr->next;
		}
		ptr->next = ft_create_elem(data);
	}
}
