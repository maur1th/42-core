/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/04 22:55:58 by tmaurin           #+#    #+#             */
/*   Updated: 2015/09/05 21:56:29 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(const char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

long	ft_get_multiplier(const char *str)
{
	long	result;
	int		i;

	i = 0;
	result = 1;
	while ((str[i] >= '0' && str[i] <= '9') && str[i] != '\0')
	{
		result *= 10;
		i += 1;
	}
	return (result / 10);
}

int		ft_atoi(const char *str)
{
	int		result;
	int		sign;

	result = 0;
	sign = 1;
	while (!(*str >= '0' && *str <= '9') && *str != '\0' && sign != -1)
	{
		if (*(str++) == '-')
			sign *= -1;
	}
	while ((*str != '\0') && (*str >= '0' && *str <= '9'))
	{
		result += (*str - '0') * ft_get_multiplier(str);
		str++;
	}
	return (result * sign);
}
