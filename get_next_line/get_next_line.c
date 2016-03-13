/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tm <tm@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/27 01:20:09 by tm                #+#    #+#             */
/*   Updated: 2016/01/27 18:05:10 by tm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "libft/libft.h"
#include "get_next_line.h"

static char		*copy_read_data(char *data, t_list *list, size_t length)
{
	size_t		i;
	size_t		j;
	t_list		*tmp;

	i = 0;
	j = 0;
	while (list != NULL)
	{
		while (i < list->content_size)
		{
			data[i + j] = ((char*)list->content)[i];
			i += 1;
		}
		j += i;
		i = 0;
		tmp = list;
		list = list->next;
		free(tmp->content);
		free(tmp);
	}
	data[length] = '\0';
	return (data);
}

int				get_next_line(int const fd, char **line)
{
	char			*data;
	t_list			*list;
	char			*buf;
	size_t			ret;
	size_t			length_read;

	list = NULL;
	length_read = 0;
	if (!(buf = (char*)malloc(sizeof(char) * (BUFF_SIZE + 1))))
		return (-1);
	while ((ret = read(fd, buf, BUFF_SIZE)))
	{
		length_read += ret;
		ft_lstpush(&list, ft_lstnew(buf, ret));
	}
	if (!(data = (char*)malloc(sizeof(char) * length_read + 1)))
		return (-1);
	// return (copy_read_data(data, list, length_read));
	return (1);
}
