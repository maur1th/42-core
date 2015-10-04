/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/26 10:11:03 by exam              #+#    #+#             */
/*   Updated: 2015/09/26 10:24:04 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c, int nb)
{
	while (nb-- > 0)
		write(1, &c, 1);
}

int		is_alpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

int		get_repeat(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 'a' + 1);
	else
		return (c - 'A' + 1);
}

int		main(int ac, char **av)
{
	int		i;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i] != '\0')
		{
			if (is_alpha(av[1][i]))
				ft_putchar(av[1][i], get_repeat(av[1][i]));
			else
				ft_putchar(av[1][i], 1);
			i += 1;
		}
	}
	ft_putchar('\n', 1);
	return (0);
}
