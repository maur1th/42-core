/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/26 11:09:40 by exam              #+#    #+#             */
/*   Updated: 2015/09/26 11:22:36 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list		*list_ptr;

	list_ptr = begin_list;
	while (list_ptr != 0)
	{
		(*f)(list_ptr->data);
		list_ptr = list_ptr->next;
	}
}
