/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle02.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/19 11:51:57 by tmaurin           #+#    #+#             */
/*   Updated: 2015/09/20 20:49:46 by tdefresn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLLE02_H
# define COLLE02_H
# include <unistd.h>
# include <stdlib.h>

/*
** http://unix.stackexchange.com/questions/11946/how-big-is-the-pipe-buffer
*/

typedef int				(*t_tests)(char*, int*, int*);

typedef struct			s_pipe_data
{
	struct s_pipe_data	*next;
	int					length;
	char				*data;
}						t_pipe_data;

void					ft_putchar(char c);
void					ft_putnbr(int nbr);
void					ft_putstr(char *str);
void					ft_print(int colle, int line, int col);
int						ft_strlen(char *str);
char					*ft_strcpy(char *dest, char *src);
char					*ft_strdup(char *src);
void					get_pipe_data(char **data);

int						colle_00_00(char *arg, int *width, int *height);
int						colle_00_01(char *arg, int *width, int *height);
int						colle_00_02(char *arg, int *width, int *height);
int						colle_00_03(char *arg, int *width, int *height);
int						colle_00_04(char *arg, int *width, int *height);
int						colle_01(char *argv);

#endif
