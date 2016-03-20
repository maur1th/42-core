/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbienven <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/17 18:30:48 by gbienven          #+#    #+#             */
/*   Updated: 2016/03/17 18:33:27 by gbienven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 100

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include "libft/includes/libft.h"

int		get_next_line(int const fd, char **line);

#endif
