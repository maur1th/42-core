/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/26 11:47:38 by exam              #+#    #+#             */
/*   Updated: 2015/09/26 12:51:36 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_convert(int value, int base, char *s, int *i)
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

int		ft_intlen(int nb, int base)
{
	int		len;

	len = 1;
	while (nb > base - 1)
	{
		nb /= base;
		len += 1;
	}
	return (len);
}

char	*ft_itoa_base(int value, int base)
{
	char	*s;
	int		sign;
	int		len;

	sign = value < 0 && base == 10 ? 1 : 0;
	value = value < 0 ? -value : value;
	len = ft_intlen(value, base) + sign;
	s = (char*)malloc(sizeof(char) * (len + 1));
	if (sign)
		s[0] = '-';
	ft_convert(value, base, s, &sign);
	s[len] = '\0';
	return (s);
}
