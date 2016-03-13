/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readstream.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tm <tm@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/21 19:19:20 by tmaurin           #+#    #+#             */
/*   Updated: 2016/01/29 19:31:02 by gbienven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <libft.h>

static char		*copy_read_data(t_list *list, size_t length_read)
{
	char		*data;
	t_list		*tmp;

	if (!list)
		return (NULL);
	if (!(data = (char*)malloc(sizeof(char) * (length_read + 1))))
		return (NULL);
	ft_bzero(data, length_read + 1);
	tmp = list;
	while (list != NULL)
	{
		ft_strncat(data, list->content, list->content_size);
		list = list->next;
	}
	ft_lstdel(&tmp, ft_del);
	return (data);
}

char			*ft_readstream(size_t fd)
{
	t_list		*list;
	char		buf[5];
	size_t		ret;
	size_t		length_read;

	list = NULL;
	length_read = 0;
	while ((ret = read(fd, buf, 5)))
	{
		length_read += ret;
		ft_lstpush(&list, ft_lstnew(buf, ret));
	}
	return (copy_read_data(list, length_read));
}
