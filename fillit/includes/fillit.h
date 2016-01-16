/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Genevieve <Genevieve@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/12 14:37:20 by tm                #+#    #+#             */
/*   Updated: 2015/12/28 00:44:25 by Genevieve        ###   ########.fr       */
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
t_list		*make_tetriminos(char *str);
t_matrix	*make_tetrimino(char *str, int fill);
void		log_error_and_exit(char *str);
int			check_form(t_list *list);

#endif
