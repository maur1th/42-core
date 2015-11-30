/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tm <tm@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 00:52:59 by tm                #+#    #+#             */
/*   Updated: 2015/11/30 01:07:47 by tm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_convert(int value, int base, char *s, short *i)
{
	char	*range;

	range = "0123456789ABCDEF";
	if (value < base)
	{
		s[*i] = range[value];
		*i += 1;
	}
	else
	{
		ft_convert(value / base, base, s, i);
		ft_convert(value % base, base, s, i);
	}
}

static int		ft_intlen(int nb, int base)
{
	short	len;

	len = 1;
	while (nb > base - 1)
	{
		nb /= base;
		len += 1;
	}
	return (len);
}

char			*ft_itoa(int n)
{
	char	*s;
	short	sign;
	short	len;


	if (n == -2147483648)
	{
		return "-2147483648";
	}
	sign = n < 0 ? 1 : 0;
	n = n < 0 ? -n : n;
	len = ft_intlen(n, 10) + sign;
	s = (char*)malloc(sizeof(char) * (len + 1));
	if (sign)
		s[0] = '-';
	ft_convert(n, 10, s, &sign);
	s[len] = '\0';
	return (s);
}
