/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/16 15:24:42 by tmaurin           #+#    #+#             */
/*   Updated: 2015/09/16 15:24:43 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int		i;

	i = 1;
	if (!begin_list)
		return (0);
	while (begin_list->next)
	{
		begin_list = begin_list->next;
		i += 1;
	}
	return (i);
}
