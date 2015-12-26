/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbienven <gbienven@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 19:59:04 by tm                #+#    #+#             */
/*   Updated: 2015/12/24 03:00:24 by gbienven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <fcntl.h>
#include <libft.h>
#include <fillit.h>
#include <unistd.h>

void		log_error_and_exit(char *str)
{
	write(2, str, ft_strlen(str));
	exit(0);
}

int			main(int argc, char **argv)
{
	char	*str;
	int		fd;

	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		if (fd < 0)
			log_error_and_exit("error\n");
		str = ft_readstream(fd);
		if (!(check_lines(str)))
		{
			log_error_and_exit("error\n");
		}
		ft_putstr(str);
		ft_putstr("=================\n=================\n\n");
		make_tetriminos(str);
	}
	else
		log_error_and_exit("error\n");
	return (0);
}
