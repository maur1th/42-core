/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getstream.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tm <tm@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/21 19:19:20 by tmaurin           #+#    #+#             */
/*   Updated: 2015/12/15 01:02:04 by tm               ###   ########.fr       */
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
		while (((char*)list->content)[i] != '\0')
		{
			data[i + j] = ((char*)list->content)[i];
			i += 1;
		}
		i = 0;
		j += ft_strlen(list->content);
		tmp = list;
		list = list->next;
		free(tmp->content);
		free(tmp);
	}
	data[length] = '\0';
	return (data);
}

char			*ft_getstream(size_t fd)
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
		buf[ret] = '\0';
		length_read += ret;
		ft_lstpush(&list, ft_lstnew(buf, ret));
	}
	data = (char*)malloc(sizeof(char) * length_read + 1);
	return (copy_read_data(data, list, length_read));
}
