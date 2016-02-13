/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 17:22:40 by tmaurin           #+#    #+#             */
/*   Updated: 2015/12/05 16:19:35 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int			ft_atoi(const char *str)
{
	long	result;
	short	sign;

	sign = 1;
	result = 0;
	if (ft_strlen(str) == 0)
		return (0);
	while (*str >= 0 && *str <= 32)
		str++;
	if ((*str == '-' || *str == '+'))
	{
		if (*str++ == '-')
			sign = -1;
	}
	while (*str >= '0' && *str <= '9')
		result = (result + *(str++) - '0') * 10;
	return (result / 10 * sign);
}
