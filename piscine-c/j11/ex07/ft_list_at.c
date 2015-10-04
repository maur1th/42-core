/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/16 19:07:56 by tmaurin           #+#    #+#             */
/*   Updated: 2015/09/16 19:07:57 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	i;

	if (nbr == 0)
		return (NULL);
	i = 0;
	while (i++ < nbr - 1)
	{
		if (begin_list->next == NULL && i < nbr -1 )
			return (NULL);
		begin_list = begin_list->next;
	}
	return (begin_list);
}
