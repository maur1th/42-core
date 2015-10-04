/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/08 22:09:11 by tmaurin           #+#    #+#             */
/*   Updated: 2015/09/08 22:09:13 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, int nb)
{
	int		len;
	int		i;

	len = ft_strlen(dest);
	i = 0;
	while (i < nb)
	{
		dest[len + i] = src[i];
		i += 1;
	}
	dest[len + i] = '\0';
	return (dest);
}
