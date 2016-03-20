/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Genevieve <Genevieve@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/18 15:21:58 by gbienven          #+#    #+#             */
/*   Updated: 2016/03/18 20:30:53 by Genevieve        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int			main(int argc, char **argv)
{
	int		fd;
	int		i;
	char	*line;

	i = 0;
	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		if (fd < 0)
			fd = 0;
		while ((i = get_next_line(fd, &line) > 0))
		{
			printf("{%d}	[%s]\n", i, line);
			free(line);
		}
	}
	return (0);
}
