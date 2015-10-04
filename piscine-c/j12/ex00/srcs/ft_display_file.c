/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/17 11:41:47 by tmaurin           #+#    #+#             */
/*   Updated: 2015/09/17 11:41:49 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <display_file.h>

void	ft_putstr(int fd, char *str)
{
	while (*str != '\0')
		write(fd, str++, 1);
}

void	ft_readfile(int fd)
{
	int		ret;
	char	buf[11];

	while ((ret = read(fd, buf, 10)))
	{
		buf[ret] = '\0';
		ft_putstr(1, buf);
	}
}

int		main(int argc, char **argv)
{
	int fd;

	if (argc < 2)
		ft_putstr(2, "File name missing.\n");
	else if (argc > 2)
		ft_putstr(2, "Too many arguments.\n");
	else
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
			return (0);
		else
		{
			ft_readfile(fd);
			if (close(fd) == -1)
				return (0);
		}
	}
	return (0);
}
