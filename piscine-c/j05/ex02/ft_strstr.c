/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/08 13:44:11 by tmaurin           #+#    #+#             */
/*   Updated: 2015/09/08 15:29:34 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i] != '\0' && to_find)
	{
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			else if (str[i + j + 1] == '\0')
				return (0);
			j += 1;
		}
		j = 0;
		i += 1;
	}
	return (to_find[0] == '\0' ? str : 0);
}
