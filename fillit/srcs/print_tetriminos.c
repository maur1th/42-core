/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_tetriminos.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tm <tm@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/23 06:37:05 by tm                #+#    #+#             */
/*   Updated: 2016/01/23 06:40:46 by tm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void			print_tetriminos(t_list *list)
{
	if (list == NULL)
		return ;
	else
	{
		ft_putmatrix(list->content);
		ft_putstr("======\n");
		return print_tetriminos(list->next);
	}
}
