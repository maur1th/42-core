/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/15 21:53:00 by tmaurin           #+#    #+#             */
/*   Updated: 2015/09/15 21:53:01 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i += 1;
	}
	return (s1[i] - s2[i]);
}

void	ft_sort_wordtab(char **tab)
{
	int		i;
	int		stop;
	char	*ptr;

	stop = 0;
	while (!stop)
	{
		stop = 1;
		i = 1;
		while (tab[i][0] != '\0')
		{
			if (ft_strcmp(tab[i], tab[i + 1]) > 0)
			{
				stop = 0;
				ptr = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = ptr;
			}
			i += 1;
		}
	}
}
