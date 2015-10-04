/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/20 13:20:39 by tmaurin           #+#    #+#             */
/*   Updated: 2015/09/20 15:03:50 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <eval_expr.h>

int		eval_expr(char *str)
{
	char	*expression;
	int		result;

	result = 0;
	expression = ft_strdup(str);
	eval_expression(&expression, &result);
	return (result);
}

int		main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_putnbr(eval_expr(av[1]));
		ft_putchar('\n');
	}
	return (0);
}
