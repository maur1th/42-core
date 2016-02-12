/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tm <tm@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/12 14:37:20 by tm                #+#    #+#             */
/*   Updated: 2016/01/28 13:13:51 by tm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include <libft.h>

# define TT_HEIGHT 4
# define TT_WIDTH 4
# define TT_LENGTH (TT_HEIGHT * (TT_WIDTH + 1)) + 1

t_bool		check_file(char *str, size_t str_length);
t_list		*make_tetriminos(char *str, size_t srt_length);
t_list		*push_tetrimino(t_list *list, t_matrix *tetrimino);
int			check_tetriminos(t_list *list);
t_list		*trim_tetriminos(t_list *tetriminos);
t_matrix	*trim_tetrimino(t_matrix *matrix);
void		solve(t_list *list, size_t size);
t_bool		insert_tetrimino(t_matrix *square, t_matrix *tetr, int pos);
void		remove_tetrimino(char *square_data, char tetr_letter);
void		del_tetrimino(void *content, size_t size);

#endif
