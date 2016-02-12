/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trim_tetriminos.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tm <tm@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/25 10:47:17 by tmaurin           #+#    #+#             */
/*   Updated: 2016/01/27 20:25:03 by tm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>
#include <fillit.h>

t_list			*trim_tetriminos(t_list *tetriminos)
{
	t_list		*trimmed_ones;
	t_list		*ptr;

	ptr = tetriminos;
	trimmed_ones = NULL;
	while (tetriminos) {
		trimmed_ones = push_tetrimino(trimmed_ones,
			trim_tetrimino(tetriminos->content));
		ptr = tetriminos;
		tetriminos = tetriminos->next;
		free(ptr);
	}
	return (trimmed_ones);
}
