/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/15 15:34:38 by tmaurin           #+#    #+#             */
/*   Updated: 2015/09/15 20:22:50 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <do_op.h>
#include <stdio.h>

void	get_ops(t_op ops[5])
{
	ops[0].symbol = '+';
	ops[0].eval = &add;
	ops[1].symbol = '-';
	ops[1].eval = &sub;
	ops[2].symbol = '*';
	ops[2].eval = &mul;
	ops[3].symbol = '/';
	ops[3].eval = &divide;
	ops[3].name = "division";
	ops[4].symbol = '%';
	ops[4].eval = &mod;
	ops[4].name = "modulo";
}

int		check_divmod(t_op op, char symbol, int nb)
{
	if (op.symbol == symbol && nb == 0 && (symbol == '/' || symbol == '%'))
	{
		ft_putstr("Stop : ");
		ft_putstr(op.name);
		ft_putstr(" by zero\n");
		return (1);
	}
	return (0);
}

int		main(int argc, char **argv)
{
	t_op	ops[5];
	int		i;

	if (argc != 4)
		return (0);
	else if (ft_strlen(argv[2]) == 1)
	{
		get_ops(ops);
		i = -1;
		while (i++ < 5)
		{
			if (check_divmod(ops[i], *argv[2], ft_atoi(argv[3])))
				return (0);
			else if (ops[i].symbol == *argv[2])
			{
				ft_putnbr(ops[i].eval(ft_atoi(argv[1]), ft_atoi(argv[3])));
				ft_putstr("\n");
				return (0);
			}
		}
	}
	ft_putstr("0\n");
}
