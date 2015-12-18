/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Genevieve <Genevieve@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/12 14:37:20 by tm                #+#    #+#             */
/*   Updated: 2015/12/18 00:13:23 by Genevieve        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
#include <libft.h>

t_matrix	*matrixshift(t_matrix *matrix, t_matrix *piece);
char		**strdoublesplit(char const *s);
int			check_lines(char *str);

#endif
