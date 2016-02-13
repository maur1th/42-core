/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 21:09:24 by tmaurin           #+#    #+#             */
/*   Updated: 2015/12/05 14:26:32 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>

static void		convert(int value, int base, char *s, short *i)
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
		convert(value / base, base, s, i);
		convert(value % base, base, s, i);
	}
}

static int		intlen(int nb, int base)
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

char			*ft_itoa_base(int value, int base)
{
	char	*s;
	short	sign;
	short	len;

	if (value == -2147483648)
		return (ft_strdup("-2147483648"));
	sign = value < 0 && base == 10;
	value = value < 0 ? -value : value;
	len = intlen(value, base) + sign;
	if (!(s = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	if (sign)
		s[0] = '-';
	convert(value, base, s, &sign);
	s[len] = '\0';
	return (s);
}
