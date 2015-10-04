/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle_00_00.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdefresn <tdefresn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/19 12:51:21 by tdefresn          #+#    #+#             */
/*   Updated: 2015/09/20 21:26:48 by tdefresn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <colle02.h>

int g_i;
int g_ii;

#define HCHAR 'B'
#define VCHAR 'B'
#define TLCHAR 'A'
#define TRCHAR 'C'
#define BLCHAR 'C'
#define BRCHAR 'A'

void	set_height_width_04(char *cursor, int *w, int *h)
{
	*w = 0;
	*h = 0;
	while (*cursor != '\0')
	{
		if (*cursor == '\n')
			*h = *h + 1;
		if (*h == 0)
			*w = *w + 1;
		cursor++;
	}
}

int		is_newline_04(char *arg, int *width, int *height, int *y_offset)
{
	if (arg[g_ii] == '\n')
	{
		if (arg[g_ii + 1] == '\0')
			return (-1);
		*y_offset = *y_offset + 1;
		if (*y_offset > 0
			&& *y_offset < (*height - 1)
			&& *width
			&& arg[g_ii + 1] != VCHAR)
			return (0);
		if (*y_offset == (*height - 1) && arg[g_ii + 1] != BLCHAR)
			return (0);
		g_i = 1;
		g_ii = g_i + *y_offset * (*width + 1);
		return (1);
	}
	return (-1);
}

int		is_valid_character_04(char *arg, int *width, int *height, int *y_offset)
{
	if (*y_offset == 0 || *y_offset == *height)
	{
		if (g_i == (*width - 1) && arg[g_ii] != TRCHAR)
			return (0);
		if (g_i < (*width - 1) && arg[g_ii] != HCHAR)
			return (0);
	}
	else if (y_offset > 0
			&& *y_offset < (*height - 1))
	{
		if (g_i < (*width - 1) && arg[g_ii] != ' ')
			return (0);
		else if (g_i == *width && (arg[g_ii] != HCHAR || arg[g_ii] != 'o'))
			return (0);
	}
	return (1);
}

int		test_loop_04(char *arg, int *width, int *height)
{
	int		y_offset;
	int		test_result;

	y_offset = 0;
	g_i = 1;
	g_ii = g_i + y_offset * (*width + 1);
	while (arg[g_ii] != '\0')
	{
		test_result = is_newline_04(arg, width, height, &y_offset);
		if (test_result == 0)
			return (0);
		else if (test_result == 1)
			continue;
		if (!is_valid_character_04(arg, width, height, &y_offset))
			return (0);
		g_i++;
		g_ii = g_i + y_offset * (*width + 1);
	}
	return (1);
}

int		colle_00_04(char *arg, int *width, int *height)
{
	g_i = 0;
	g_ii = 0;
	if (arg[0] != TLCHAR)
		return (0);
	if (arg[1] == TRCHAR)
	{
		*width = 1;
		if (arg[3] == BLCHAR)
		{
			*width = 2;
			*height = 2;
			return (1);
		}
	}
	set_height_width_04(arg, width, height);
	return (test_loop_04(arg, width, height));
}
