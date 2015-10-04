/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/11 10:40:53 by tmaurin           #+#    #+#             */
/*   Updated: 2015/09/11 10:40:55 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_door.h"

void	ft_putstr(char *str)
{
	while (*str != '\0')
		write(1, str++, 1);
}

t_bool	close_door(t_door *door)
{
	ft_putstr("Door closing...");
	door->state = CLOSE;
	return (TRUE);
}

t_bool	is_door_open(t_door *door)
{
	ft_putstr("Door is open ?");
	return (door->state == OPEN);
}

t_bool	is_door_close(t_door *door)
{
	ft_putstr("Door is close ?");
	return (door->state == CLOSE);
}
