/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tm <tm@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 19:59:04 by tm                #+#    #+#             */
/*   Updated: 2016/01/26 19:27:35 by tm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <libft.h>
#include <fillit.h>

static void		log_error_and_exit(char *str)
{
	write(2, str, ft_strlen(str));
	exit(0);
}

static t_list	*init(char *filename)
{
	char	*str;
	int		fd;
	t_list	*tetrimino_list;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		log_error_and_exit("error\n");
	str = ft_readstream(fd);
	if (!(check_file(str)))
		log_error_and_exit("error\n");
	tetrimino_list = make_tetriminos(str);
	if (!(check_tetriminos(tetrimino_list)))
		log_error_and_exit("error\n");
	return (tetrimino_list);
}

int				main(int argc, char **argv)
{
	t_list	*tetrimino_list;

	if (argc == 2)
	{
		tetrimino_list = init(argv[1]);
		solve(tetrimino_list, 2);
	}
	else
	{
		log_error_and_exit("error\n");		
	}
	return (0);
}
