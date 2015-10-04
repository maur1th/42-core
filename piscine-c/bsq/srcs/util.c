/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/21 16:03:02 by tmaurin           #+#    #+#             */
/*   Updated: 2015/09/24 14:11:28 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsq.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (*(str++) != '\0')
		i += 1;
	return (i);
}

int		line_len(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\n' && str[i] != '\0')
		i++;
	return (i);
}

int		min(int n1, int n2)
{
	return (n1 < n2 ? n1 : n2);
}

int		max(int n1, int n2)
{
	return (n1 > n2 ? n1 : n2);
}
