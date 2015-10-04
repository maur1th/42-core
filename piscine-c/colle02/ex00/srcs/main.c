/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/19 11:53:18 by tmaurin           #+#    #+#             */
/*   Updated: 2015/09/20 21:13:59 by tdefresn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <colle02.h>

t_tests		*populate_ops(void)
{
	t_tests		*colle00;

	colle00 = (t_tests*)malloc(sizeof(*colle00) * 5);
	colle00[0] = &colle_00_00;
	colle00[1] = &colle_00_01;
	colle00[2] = &colle_00_02;
	colle00[3] = &colle_00_03;
	colle00[4] = &colle_00_04;
	return (colle00);
}

void		test_colle00(char *str, int i, int *solutions)
{
	int			height;
	int			width;
	t_tests		*colle00;
	t_tests		test;

	colle00 = populate_ops();
	test = colle00[i];
	height = 0;
	width = 0;
	if (test(str, &width, &height))
	{
		if (*solutions != 0)
			ft_putstr(" || ");
		ft_print(i, width, height);
		*solutions += 1;
	}
}

int			main(void)
{
	int			solutions;
	char		*data;
	int			i;

	get_pipe_data(&data);
	i = 0;
	solutions = 0;
	while (i < 5)
		test_colle00(data, i++, &solutions);
	if (colle_01(data))
	{
		solutions += 1;
		ft_putstr("[colle-01 : sudoku] [9] [9]");
	}
	if (solutions == 0)
		ft_putstr("aucune");
	ft_putchar('\n');
	return (0);
}
