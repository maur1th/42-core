/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tm <tm@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/18 15:21:58 by gbienven          #+#    #+#             */
/*   Updated: 2016/03/20 21:36:04 by tm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char			*str_init(int const fd)
{
	int		ret;
	char		*buf;

	if ((buf = ft_strnew(BUFF_SIZE)) == NULL)
		return (NULL);
	ret = read(fd, buf, BUFF_SIZE);
	if (ret < 0)
	{
		free(buf);
		return (NULL);
	}
	buf[ret] = '\0';
	return (buf);
}

char			*read_to_str(int const fd, char *str)
{
	int		ret;
	char		*buf;

	while (!(ft_strchr(str, '\n')))
	{
		if ((buf = ft_strnew(BUFF_SIZE)) == NULL)
			return (NULL);
		ret = read(fd, buf, BUFF_SIZE);
		if (ret < 0)
		{
			free(buf);
			return (NULL);
		}
		if (ret == 0) {
			free(buf);
			return (str);
		}
		buf[ret] = '\0';
		str = ft_strjoin(str, buf);
		free(buf);
	}
	return (str);
}

int				get_next_line(int const fd, char **line)
{
	char		*newline;
	char		*tmp;
	static char	*str = NULL;

	if (str == NULL && (str = str_init(fd)) == NULL)
		return (-1);
	if ((str = read_to_str(fd, str)) == NULL)
		return (-1);
	if ((newline = ft_strchr(str, '\n')) == NULL)
	{
		*line = str;
		str = NULL;
		return (ft_strlen(*line) == 0 ? 0 : 1);
	}
	*line = ft_strsub(str, 0, newline - str);
	tmp = str;
	str = ft_strsub(tmp, (newline - tmp) + 1, ft_strlen(tmp));
	free(tmp);
	return (1);
}
