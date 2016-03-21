/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tm <tm@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/18 15:21:58 by gbienven          #+#    #+#             */
/*   Updated: 2016/03/22 00:03:33 by tm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char			*read_to_str(int const fd, char *str)
{
	int		ret;
	char	*buf;

	ret = 1;
	while (!(ft_strchr(str, '\n')) && ret > 0)
	{
		if ((buf = ft_strnew(BUFF_SIZE)) == NULL)
			return (NULL);
		ret = read(fd, buf, BUFF_SIZE);
		if (!(str = ft_strjoin(str, buf)))
			return (NULL);
		free(buf);
	}
	return (ret < 0 ? NULL : str);
}

int				get_next_line(int const fd, char **line)
{
	char		*newline;
	char		*tmp;
	static char	*str = NULL;

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
