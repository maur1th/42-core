/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/04 22:55:58 by tmaurin           #+#    #+#             */
/*   Updated: 2015/09/24 14:10:41 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsq.h>

int		ft_is_space(char c)
{
	if (c <= 32)
		return (1);
	return (0);
}

int		ft_is_number(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int		ft_atoi(char *str)
{
	long	atoy;
	int		i;
	int		sign;

	sign = 1;
	i = 0;
	atoy = 0;
	while (ft_is_space(str[i]))
		i++;
	if (str[0] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[0] == '+')
		i++;
	while (ft_is_number(str[i]))
	{
		atoy = atoy + str[i] - '0';
		atoy *= 10;
		i++;
	}
	if (sign == -1)
		return (-atoy / 10);
	return (atoy / 10);
}
