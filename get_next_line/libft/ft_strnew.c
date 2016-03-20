/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tm <tm@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 23:28:50 by tm                #+#    #+#             */
/*   Updated: 2016/03/20 19:12:02 by tm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>

char	*ft_strnew(size_t size)
{
	char	*s;

	if (!(s = (char*)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	ft_memset(s, '\0', size + 1);
	return (s);
}
