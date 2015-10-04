/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/15 15:36:05 by tmaurin           #+#    #+#             */
/*   Updated: 2015/09/15 15:36:07 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H
# include <unistd.h>

void			ft_putstr(char *str);
void			ft_putnbr(int nb);
int				ft_strlen(char *str);
int				ft_atoi(char *str);
int				add(int n1, int n2);
int				sub(int n1, int n2);
int				mul(int n1, int n2);
int				divide(int n1, int n2);
int				mod(int n1, int n2);

typedef	struct	s_op
{
	char	symbol;
	char	*name;
	int		(*eval)(int, int);
}				t_op;

#endif
