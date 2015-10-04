/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_pipe_data.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/20 15:29:27 by tmaurin           #+#    #+#             */
/*   Updated: 2015/09/20 15:29:29 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <colle02.h>

t_pipe_data		*ft_create_elem(void *data)
{
	t_pipe_data	*buf;

	buf = (t_pipe_data*)malloc(sizeof(*buf));
	if (buf)
	{
		buf->next = NULL;
		buf->data = data;
	}
	return (buf);
}

void			ft_list_push_back(t_pipe_data **begin_list, void *data)
{
	t_pipe_data		*ptr;

	ptr = *begin_list;
	if (!(*begin_list))
		*begin_list = ft_create_elem(data);
	else
	{
		while ((ptr)->next)
		{
			ptr = ptr->next;
		}
		ptr->next = ft_create_elem(data);
	}
}

void			copy_read_data(char *read_data, t_pipe_data *list, int length)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (list != NULL)
	{
		while (list->data[i] != '\0')
		{
			read_data[i + j] = list->data[i];
			i += 1;
		}
		i = 0;
		j += ft_strlen(list->data);
		list = list->next;
	}
	read_data[length] = '\0';
}

void			get_pipe_data(char **data)
{
	t_pipe_data		*list;
	char			str[11];
	int				ret;
	int				length_read;

	list = NULL;
	length_read = 0;
	while ((ret = read(0, str, 10)))
	{
		str[ret] = '\0';
		length_read += ret;
		ft_list_push_back(&list, ft_strdup(str));
	}
	*data = (char*)malloc(sizeof(char) * length_read + 1);
	copy_read_data(*data, list, length_read);
}
