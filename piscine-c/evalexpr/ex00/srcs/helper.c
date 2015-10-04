/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/20 11:34:05 by tmaurin           #+#    #+#             */
/*   Updated: 2015/09/20 19:40:33 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <eval_expr.h>

char	get_next_char(char **expression)
{
	char	c;

	c = '\0';
	if ((*expression)[0] != '\0')
	{
		c = (*expression)[0];
		*expression += 1;
	}
	return (c);
}

int		get_num(char **expression)
{
	char	*nb;
	int		i;

	i = 0;
	nb = (char*)malloc(sizeof(*nb) * nb_length(*expression) + 1);
	while (is_num(**expression) && **expression != '\0')
	{
		nb[i] = **expression;
		*expression += 1;
		i += 1;
	}
	nb[i] = '\0';
	i = ft_atoi(nb);
	free(nb);
	return (i);
}
