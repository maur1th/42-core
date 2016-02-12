/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_helper.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tm <tm@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/25 10:47:17 by tmaurin           #+#    #+#             */
/*   Updated: 2016/01/27 20:25:03 by tm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>

t_list	*push_tetrimino(t_list *list, t_matrix *tetrimino)
{
	t_list		*node;

	node = ft_lstnew(tetrimino, sizeof(t_matrix));
	free(tetrimino);
	ft_lstpush(&list, node);
	return (list);
}
