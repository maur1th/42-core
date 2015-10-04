/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/20 11:35:30 by tmaurin           #+#    #+#             */
/*   Updated: 2015/09/20 19:40:27 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <eval_expr.h>

/*
** http://matt.might.net/articles/grammars-bnf-ebnf/
*/

void	eval_expression(char **expression, int *result)
{
	int		temp;
	char	op;

	eval_term(expression, result);
	while (((*expression)[0] != '\0' && ((*expression)[0] == '+'
			|| (*expression)[0] == '-')))
	{
		op = get_next_char(expression);
		eval_term(expression, &temp);
		if (op == '+')
			*result = *result + temp;
		else
			*result = *result - temp;
	}
}

void	eval_term(char **expression, int *result)
{
	int		temp;
	char	op;

	eval_factor(expression, result);
	while ((*expression)[0] != '\0' && ((*expression)[0] == '*'
			|| (*expression)[0] == '/' || (*expression)[0] == '%'))
	{
		op = get_next_char(expression);
		eval_factor(expression, &temp);
		if (op == '*')
			*result = *result * temp;
		else if (op == '/')
			*result = *result / temp;
		else
			*result = *result % temp;
	}
}

void	eval_factor(char **expression, int *result)
{
	if ((*expression)[0] != '\0' && (*expression)[0] != '(')
		*result = get_num(expression);
	else
	{
		get_next_char(expression);
		eval_expression(expression, result);
		get_next_char(expression);
	}
}
