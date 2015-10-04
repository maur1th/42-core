/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/21 10:13:46 by tmaurin           #+#    #+#             */
/*   Updated: 2015/09/24 14:11:05 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsq.h>

int		read_file(char *file_name, char **data)
{
	int		fd;

	fd = open(file_name, O_RDONLY);
	if (fd == -1)
	{
		write(2, "map error\n", 10);
		return (0);
	}
	get_stream(fd, data);
	if (close(fd) == -1)
		return (0);
	return (1);
}

void	get_lines(char **ptr, char **first, char **grid)
{
	int		i;
	char	*data;

	data = *ptr;
	*first = (char*)malloc(sizeof(char) * line_len(data) + 1);
	*grid = (char*)malloc(sizeof(char) * (ft_strlen(data) - line_len(data)));
	i = 0;
	while (*data != '\n')
		(*first)[i++] = *(data++);
	(*first)[i] = '\0';
	data += 1;
	i = 0;
	while (*data != '\0')
		(*grid)[i++] = *(data++);
	(*grid)[i] = '\0';
	free(*ptr);
}

int		main(int ac, char **av)
{
	int		i;
	char	*data;
	char	*first;
	char	*grid;

	if (ac == 1)
	{
		get_stream(0, &data);
		get_lines(&data, &first, &grid);
		launcher(first, grid);
	}
	else
	{
		i = 0;
		while (++i < ac)
		{
			if (!read_file(av[i], &data))
				return (0);
			get_lines(&data, &first, &grid);
			launcher(first, grid);
		}
	}
	return (0);
}
