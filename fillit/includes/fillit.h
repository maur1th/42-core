/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tm <tm@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/12 14:37:20 by tm                #+#    #+#             */
/*   Updated: 2016/01/23 06:46:42 by tm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include <libft.h>

# define TT_HEIGHT 4
# define TT_WIDTH 4
# define TT_LENGTH (TT_HEIGHT * (TT_WIDTH + 1)) + 1

typedef int t_bool;
enum { false, true };

t_matrix	*matrixshift(t_matrix *matrix, t_matrix *piece);
t_bool		check_file(char *str);
int			check_tetriminos(t_list *list);
t_list		*make_tetriminos(char *str);
t_matrix	*trim_tetrimino(t_matrix *matrix);
void		print_tetriminos(t_list *list);

#endif
