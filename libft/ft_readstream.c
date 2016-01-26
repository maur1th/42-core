/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readstream.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tm <tm@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/21 19:19:20 by tmaurin           #+#    #+#             */
/*   Updated: 2016/01/23 07:06:55 by tm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "libft.h"

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

char			*ft_readstream(size_t fd)
{
	char		*data;
	t_list		*list;
	char		buf[6];
	size_t		ret;
	size_t		length_read;

	list = NULL;
	length_read = 0;
	while ((ret = read(fd, buf, 5)))
	{
		length_read += ret;
		ft_lstpush(&list, ft_lstnew(buf, ret));
	}
	data = (char*)malloc(sizeof(char) * length_read + 1);
	return (copy_read_data(data, list, length_read));
}
