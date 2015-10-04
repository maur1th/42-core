/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/21 10:28:13 by tmaurin           #+#    #+#             */
/*   Updated: 2015/09/21 10:28:15 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H
# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

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

typedef struct			s_tile
{
	char				obs;
	char				clr;
	char				sqr;
	int					wdth;
	int					hght;
}						t_tile;

typedef struct			s_obs
{
	int					*x;
	int					*y;
	int					length;
}						t_obs;

typedef struct			s_sqr
{
	int					x;
	int					y;
	int					size;
}						t_sqr;

void					ft_putnbr(int nbr);
void					ft_putstr(char *str);
void					ft_putchar(char c);

char					*ft_strdup(char *src);
void					get_stream(int fd, char **data);
int						ft_atoi(char *str);

int						line_len(char *str);
int						ft_strlen(char *str);
int						min(int n1, int n2);
int						max(int n1, int n2);

void					extr_char(char *first, t_tile *tile);
int						extr_nb_lines(char *str);

int						launcher(char *first, char *grid);
int						all_checks(char *first, char *grid, t_tile *tile,
									int *obs_nb);
t_obs					*store_obs(char *grid, t_tile *tile, t_obs *obs,
									int obs_nb);
void					ft_list_push_back_obs(t_obs **begin_list, int x, int y);

int						find_solution(t_tile *tile, t_obs *obs,
										t_sqr *solution);
void					print_grid(t_tile *tile, t_obs *obs, t_sqr *sqr);

#endif
