/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/14 18:44:09 by tmaurin           #+#    #+#             */
/*   Updated: 2015/09/15 21:29:13 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

int					ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char				*ft_strcpy(char *dest, char *src)
{
	while (*src != '\0')
		*(dest++) = *(src++);
	*dest = *src;
	return (dest);
}

char				*ft_strdup(char *src)
{
	char	*ptr;

	ptr = (char*)malloc(sizeof(*ptr) * (ft_strlen(src)));
	ft_strcpy(ptr, src);
	return (ptr);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	t_stock_par		*tab;
	int				i;

	tab = (t_stock_par*)malloc(sizeof(*tab) * ac + 1);
	i = 0;
	while (i < ac)
	{
		tab[i].size_param = ft_strlen(*(av + i));
		tab[i].str = *(av + i);
		tab[i].copy = ft_strdup(*(av + i));
		tab[i].tab = ft_split_whitespaces(*(av + i));
		i += 1;
	}
	tab[i].str = "\0";
	return (tab);
}
