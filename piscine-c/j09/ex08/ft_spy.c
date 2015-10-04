/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/11 15:29:58 by tmaurin           #+#    #+#             */
/*   Updated: 2015/09/11 15:29:59 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

int		ft_check_after(char *str, int i)
{
	while (str[i] == ' ' && str[i])
	{
		if (str[i] + 48 == '0')
			return (0);
		i++;
	}
	if (str[i] == '\0')
		return (1);
	else
		return (0);
}

int		ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i] != '\0' && to_find)
	{
		if (str[i] != to_find[j] && str[i] != ' ')
			return (0);
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0' && ft_check_after(str, i + j + 1))
				return (1);
			else if (str[i + j + 1] == '\0')
				return (0);
			j += 1;
		}
		j = 0;
		i += 1;
	}
	return (0);
}

char	ft_spy(int argc, char **argv)
{
	int		nb;
	int		i;

	i = 1;
	while (i <= argc - 1)
	{
		nb = ft_strstr(ft_strlowcase(argv[i]), "president");
		if (nb == 1)
			return (1);
		nb = ft_strstr(ft_strlowcase(argv[i]), "attack");
		if (nb == 1)
			return (1);
		nb = ft_strstr(ft_strlowcase(argv[i]), "powers");
		if (nb == 1)
			return (1);
		i++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int		nb;

	nb = ft_spy(argc, argv);
	if (nb == 1)
		write(1, "Alert !!!\n", 10);
	return (0);
}
