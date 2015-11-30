/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tm <tm@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 23:41:22 by tm                #+#    #+#             */
/*   Updated: 2015/11/30 23:56:46 by tm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;

	new = (t_list*)malloc(sizeof(t_list));
	new = f(lst);
	if (lst->next)
	{
		new->next = ft_lstmap(lst->next, f);
	}
	return new;
}
