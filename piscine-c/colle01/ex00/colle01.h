/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle01.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/13 17:24:25 by tmaurin           #+#    #+#             */
/*   Updated: 2015/09/13 17:24:26 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLLE01_H
# define COLLE01_H
# include <stdlib.h>
# include <unistd.h>

int		create_grid(int **grid, int argc, char **argv);
void	copy_grid(int **copy, int **grid);
void	print_grid(int **grid);
int		initial_check(int **grid);
int		is_valid(int **grid, int y, int x, int val);

#endif
