/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_helper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouder <tbouder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/21 10:34:57 by tbouder           #+#    #+#             */
/*   Updated: 2015/09/24 14:10:26 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsq.h>

void	ft_memset(char **str, int len)
{
	int		i;

	i = 0;
	while (i < len)
		(*str)[i++] = 0;
	(*str)[i] = '\0';
}

void	extr_char(char *first, t_tile *tile)
{
	int		i;

	i = 0;
	while (first[i + 1] != '\0')
		i++;
	tile->sqr = first[i];
	tile->obs = first[i - 1];
	tile->clr = first[i - 2];
}

int		extr_nb_lines(char *first)
{
	int		i;
	int		len;
	char	*nb_line;
	int		result;

	i = 0;
	len = line_len(first);
	nb_line = (char*)malloc(sizeof(char) * len + 1);
	ft_memset(&nb_line, len);
	result = 0;
	while (i < len - 3)
	{
		nb_line[i] = first[i];
		i++;
	}
	result = ft_atoi(nb_line);
	free(nb_line);
	return (result);
}
