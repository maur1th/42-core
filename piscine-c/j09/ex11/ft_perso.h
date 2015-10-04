/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/11 10:08:36 by tmaurin           #+#    #+#             */
/*   Updated: 2015/09/11 10:37:49 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PERSO_H
# define FT_PERSO_H
# include <string.h>
# define SAVE_AUSTIN_POWERS "Mouahahah"

typedef struct	s_perso {
	char	*name;
	float	life;
	int		age;
	char	*profession;
}				t_perso;

#endif
