/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_lines.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Genevieve <Genevieve@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/17 23:56:50 by gbienven          #+#    #+#             */
/*   Updated: 2015/12/26 17:55:05 by Genevieve        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <fillit.h>

int		check_line(char *str)
{
	int	i;
	int	hash;

	i = 0;
	hash = 0;
	while (i < TT_WIDTH)
	{
		if (!(str[i] == '.' || str[i] == '#'))
			return (-1);
		if (str[i] == '#')
			hash++;
		i++;
	}
	if (str[i] != '\n')
		return (-1);
	return (hash);
}

int		check_tetrimino(char *str)
{
	int	i;
	int	j;
	int	hash;
	int	hash_total;

	j = 0;
	i = 0;
	hash_total = 0;
	while (j < TT_HEIGHT)
	{
		hash = check_line(str + i);
		if (hash == -1)
			return (0);
		hash_total += hash;
		i += TT_WIDTH + 1;
		j++;
	}
	if (str[i] != '\n' || hash_total != 4)
		return (0);
	return (1);
}

int		check_lines(char *str)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (check_tetrimino(str + i) == 0)
			return (0);
		i += TT_LENGTH;
		j++;
	}
	if (j < 1 || j > 26)
		return (0);
	return (1);
}
