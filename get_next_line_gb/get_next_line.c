/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Genevieve <Genevieve@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/18 15:21:58 by gbienven          #+#    #+#             */
/*   Updated: 2016/03/19 15:48:01 by Genevieve        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char			*str_init(int const fd)
{
	int		ret;
	char		*buf;
	char *str;

	buf = ft_strnew(BUFF_SIZE);
	ret = read(fd, buf, BUFF_SIZE);
	if (ret < 0)
		return (NULL);
	buf[ret] = '\0';
	str = (char*)malloc(sizeof(char) * (ret + 1));
	if (str == NULL)
		return (NULL);
	str[ret] = '\0';
	str = ft_strcpy(str, buf);
	free(buf);
	return (str);
}

char			*read_to_str(int const fd, char *str)
{
	int		ret;
	char		*buf;

	while (!(ft_strchr(str, '\n')))
	{
		buf = ft_strnew(BUFF_SIZE);
		ret = read(fd, buf, BUFF_SIZE);
		if (ret < 0)
			return (NULL);
		if (ret == 0)
			return (str);
		buf[ret] = '\0';
		str = ft_strjoin(str, buf);
		free(buf);
	}
	return (str);
}

int				get_next_line(int const fd, char **line)
{
	char		*newline;
	static char	*str = NULL;

	if (str == NULL && (str = str_init(fd)) == NULL)
		return (-1);
	if ((str = read_to_str(fd, str)) == NULL)
		return (-1);
	newline = ft_strchr(str, '\n');
	if (newline == NULL)
	{
		*line = ft_strdup(str);
		str = NULL;
		return (ft_strcmp("", *line) ? 1 : 0);
	}
	*line = ft_strsub(str, 0, newline - str);
	str = ft_strsub(str, (newline - str) + 1, ft_strlen(str));
	return (1);
}
