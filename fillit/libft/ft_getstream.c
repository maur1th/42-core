/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getstream.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tm <tm@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/21 19:19:20 by tmaurin           #+#    #+#             */
/*   Updated: 2015/12/15 00:44:19 by tm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "libft.h"

t_list	*ft_create_elem(void *data)
{
	t_list		*buf;

	buf = (t_list	*)malloc(sizeof(*buf));
	if (buf)
	{
		buf->next = NULL;
		buf->content = data;
	}
	return (buf);
}

void	ft_list_push_back(t_list	 **begin_list, void *data)
{
	t_list			*ptr;

	ptr = *begin_list;
	if (!(*begin_list))
		*begin_list = ft_create_elem(data);
	else
	{
		while ((ptr)->next)
			ptr = ptr->next;
		ptr->next = ft_create_elem(data);
	}
}

void	copy_read_data(char *read_data, t_list	 *list, size_t length)
{
	size_t			i;
	size_t			j;
	t_list			*tmp;

	i = 0;
	j = 0;
	while (list != NULL)
	{
		while (((char*)list->content)[i] != '\0')
		{
			read_data[i + j] = ((char*)list->content)[i];
			i += 1;
		}
		i = 0;
		j += ft_strlen(list->content);
		tmp = list;
		list = list->next;
		free(tmp->content);
		free(tmp);
	}
	read_data[length] = '\0';
}

void	ft_getstream(size_t fd, char **data)
{
	t_list			*list;
	char			str[6];
	size_t			ret;
	size_t			length_read;

	list = NULL;
	length_read = 0;
	while ((ret = read(fd, str, 5)))
	{
		str[ret] = '\0';
		length_read += ret;
		ft_list_push_back(&list, ft_strdup(str));
	}
	*data = (char*)malloc(sizeof(char) * length_read + 1);
	copy_read_data(*data, list, length_read);
}
