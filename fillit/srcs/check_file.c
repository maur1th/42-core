/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_tetriminos.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Genevieve <Genevieve@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/17 23:56:50 by gbienven          #+#    #+#             */
/*   Updated: 2015/12/28 02:06:23 by Genevieve        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <fillit.h>

static int		check_line(char *str)
{
	int			i;
	int			hash;

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

static t_bool	check_tetrimino(char *str)
{
	int			i;
	int			current_line;
	int			hash;
	int			hash_total;

	current_line = 0;
	i = 0;
	hash_total = 0;
	while (current_line < TT_HEIGHT)
	{
		hash = check_line(str + i);
		if (hash == -1)
			return (false);
		hash_total += hash;
		i += TT_WIDTH + 1;
		current_line++;
	}
	if (str[i] != '\n' || hash_total != 4)
		return (false);
	return (true);
}

t_bool			check_file(char *str)
{
	int			i;
	int			number_of_tetrominos;

	number_of_tetrominos = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (!check_tetrimino(str + i))
			return (false);
		i += TT_LENGTH;
		number_of_tetrominos++;
	}
	if (number_of_tetrominos < 1 || number_of_tetrominos > 26)
		return (false);
	return (true);
}
