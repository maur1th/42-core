/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/26 10:26:01 by exam              #+#    #+#             */
/*   Updated: 2015/09/26 10:45:15 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		do_print(char c, char *s, int max)
{
	int		i;

	i = 0;
	if (max == -1)
	{
		while (s[i] != '\0')
		{
			if (s[i++] == c)
				return (0);
		}
	}
	else
	{
		while (i < max && s[i] != '\0')
		{
			if (s[i++] == c)
				return (0);
		}
	}
	return (1);
}

int		main(int ac, char **av)
{
	int		i;

	i = 0;
	if (ac == 3)
	{
		while (av[1][i] != '\0')
		{
			if (do_print(av[1][i], av[1], i))
				ft_putchar(av[1][i]);
			i += 1;
		}
		i = 0;
		while (av[2][i] != '\0')
		{
			if (do_print(av[2][i], av[1], -1)
				&& do_print(av[2][i], av[2], i))
				ft_putchar(av[2][i]);
			i += 1;
		}
	}
	ft_putchar('\n');
	return (0);
}
