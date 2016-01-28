/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_file.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tm <tm@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/17 23:56:50 by gbienven          #+#    #+#             */
/*   Updated: 2016/01/28 13:14:31 by tm               ###   ########.fr       */
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
	if ((str[i] != '\n' && str[i] != '\0')|| hash_total != 4)
		return (false);
	return (true);
}

t_bool			check_file(char *str, size_t str_length)
{
	int			number_of_tetrominos;
	size_t		i;

	number_of_tetrominos = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (!check_tetrimino(str + i))
			return (false);
		i = i + TT_LENGTH < str_length ? i + TT_LENGTH : str_length;
		number_of_tetrominos++;
	}
	if (number_of_tetrominos < 1 || number_of_tetrominos > 26)
		return (false);
	return (true);
}
