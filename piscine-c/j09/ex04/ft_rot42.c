/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/10 23:14:38 by tmaurin           #+#    #+#             */
/*   Updated: 2015/09/10 23:14:40 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_rot42(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
			i++;
		else if ((str[i] >= 'A' && str[i] <= 'J') ||
				(str[i] >= 'a' && str[i] <= 'j'))
			str[i++] += 16;
		else if ((str[i] >= 'K' && str[i] <= 'Z') ||
				(str[i] >= 'k' && str[i] <= 'z'))
			str[i++] -= 10;
	}
	return (str);
}