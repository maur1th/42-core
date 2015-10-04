/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/20 11:29:00 by tmaurin           #+#    #+#             */
/*   Updated: 2015/09/20 11:29:01 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVAL_EXPR_H
# define EVAL_EXPR_H
# include <unistd.h>
# include <stdlib.h>

void	eval_expression(char **expression, int *result);
void	eval_term(char **expression, int *result);
void	eval_factor(char **expression, int *result);

int		not_empty(const char *expression);
char	next_char(const char *expression);
char	get_next_char(char **expression);
int		get_num(char **expression);

int		is_num(char c);
int		nb_length(char *expression);
char	*ft_strdup(char *src);
int		ft_atoi(char *str);

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);

#endif
