/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/25 10:49:21 by tmaurin           #+#    #+#             */
/*   Updated: 2015/09/25 10:49:23 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>

int		main(void)
{
	int 	fd;
	char	s1[100] = "hello";
	char	s2[100] = "you";
	char	*s3;

	// ft_strlen
	ft_putstr("ft_strlen: ");
	ft_putstr(ft_strlen("test") == strlen("test") ? "OK\n" : "KO\n");

	// ft_strdup
	ft_putstr("ft_strdup: ");
	s3 = ft_strdup(s2);
	ft_putstr(strcmp(s2, s3) == 0 && s2 != s3 ? "OK\n" : "KO\n");
	free(s3);

	// ft_strcpy
	ft_putstr("ft_strcpy: ");
	ft_putstr(strcmp(ft_strcpy(s2, s1), strcpy(s2, s1)) == 0
		? "OK\n" : "KO\n");

	// ft_strncpy
	ft_putstr("ft_strncpy: ");
	ft_putstr(strcmp(ft_strcpy(s2, s1), s2) == 0 ? "OK\n" : "KO\n");

	// ft_putchar
	ft_putstr("ft_putchar: ");
	ft_putchar('O');
	ft_putchar('K');
	ft_putchar('\n');

	// ft_putstr
	ft_putstr("ft_putstr: OK\n");

	// ft_putendl
	ft_putendl("ft_putendl: OK");

	// ft_putnbr
	ft_putstr("ft_putnbr: ");
	ft_putnbr(-1);
	ft_putchar(' ');
	ft_putnbr(0);
	ft_putchar(' ');
	ft_putnbr(-2147483648);
	ft_putchar(' ');
	ft_putnbr(2147483647);
	ft_putchar('\n');

	// ft_putchar_fd
	ft_putstr("ft_putchar_fd: ");
	fd = open("test.txt", O_WRONLY | O_TRUNC);
	if (fd == -1)
	{
		ft_putstr("\"touch test.txt\" first\n");
		return (0);
	}
	ft_putchar_fd('@', fd);
	if (close(fd) == -1)
	{
		ft_putstr("close() error\n");
		return (0);
	}
	ft_putchar('\n');
	// INCOMPLETE TEST

	// ft_putstr_fd
	ft_putstr("ft_putstr_fd: ");
	fd = open("test.txt", O_WRONLY | O_TRUNC);
	if (fd == -1)
	{
		ft_putstr("\"touch test.txt\" first\n");
		return (0);
	}
	ft_putstr_fd("test", fd);
	if (close(fd) == -1)
	{
		ft_putstr("close() error\n");
		return (0);
	}
	ft_putchar('\n');
	// INCOMPLETE TEST

	// ft_putendl_fd
	ft_putstr("ft_putendl_fd: ");
	fd = open("test.txt", O_WRONLY | O_TRUNC);
	if (fd == -1)
	{
		ft_putstr("\"touch test.txt\" first\n");
		return (0);
	}
	ft_putendl_fd("test", fd);
	if (close(fd) == -1)
	{
		ft_putstr("close() error\n");
		return (0);
	}
	ft_putchar('\n');
	// INCOMPLETE TEST

	// ft_putnbr_fd
	ft_putstr("ft_putnbr_fd: ");
	fd = open("test.txt", O_WRONLY | O_TRUNC);
	if (fd == -1)
	{
		ft_putstr("\"touch test.txt\" first\n");
		return (0);
	}
	ft_putnbr_fd(-1, fd);
	ft_putchar_fd(' ', fd);
	ft_putnbr_fd(0, fd);
	ft_putchar_fd(' ', fd);
	ft_putnbr_fd(-2147483648, fd);
	ft_putchar_fd(' ', fd);
	ft_putnbr_fd(2147483647, fd);
	if (close(fd) == -1)
	{
		ft_putstr("close() error\n");
		return (0);
	}
	ft_putchar('\n');
	// INCOMPLETE TEST
}
