/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tm <tm@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 19:59:04 by tm                #+#    #+#             */
/*   Updated: 2016/01/23 06:46:03 by tm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <fcntl.h>
#include <libft.h>
#include <fillit.h>
#include <unistd.h>

static void	log_error_and_exit(char *str)
{
	write(2, str, ft_strlen(str));
	exit(0);
}

int			main(int argc, char **argv)
{
	char	*str;
	int		fd;
	t_list	*list;

	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		if (fd < 0)
			log_error_and_exit("error\n");
		str = ft_readstream(fd);
		if (!(check_file(str)))
			log_error_and_exit("error\n");
		list = make_tetriminos(str);
		if (!(check_tetriminos(list)))
			log_error_and_exit("error\n");
	}
	else
		log_error_and_exit("error\n");
	return (0);
}
