/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/16 16:05:59 by tmaurin           #+#    #+#             */
/*   Updated: 2015/09/16 16:06:00 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list		*node;
	t_list		*buf;
	int			i;

	if (!ac)
		return (0);
	node = ft_create_elem(av[0]);
	i = 1;
	while (i < ac)
	{
		buf = ft_create_elem(av[i]);
		buf->next = node;
		node = buf;
		i += 1;
	}
	return (node);
}
