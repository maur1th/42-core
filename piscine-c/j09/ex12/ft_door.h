/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/11 10:41:02 by tmaurin           #+#    #+#             */
/*   Updated: 2015/09/11 10:41:03 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DOOR_H
# define FT_DOOR_H
# include <unistd.h>

typedef int		t_bool;
enum { FALSE, TRUE };

typedef int		t_door_state;
enum { OPEN, CLOSE };

typedef struct	s_door {
	t_door_state	state;
}				t_door;

#endif
