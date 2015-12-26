/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Genevieve <Genevieve@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/12 14:37:20 by tm                #+#    #+#             */
/*   Updated: 2015/12/26 17:15:39 by Genevieve        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include <libft.h>

# define TT_HEIGHT 4
# define TT_WIDTH 4
# define TT_LENGTH (TT_HEIGHT * (TT_WIDTH + 1)) + 1

t_matrix	*matrixshift(t_matrix *matrix, t_matrix *piece);
char		**strdoublesplit(char const *s);
int			check_lines(char *str);
void		make_tetriminos(char *str);
void		make_tetrimino(char *str, int fill);
void		log_error_and_exit(char *str);

#endif
