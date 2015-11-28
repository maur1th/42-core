/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/08 12:32:13 by tmaurin           #+#    #+#             */
/*   Updated: 2015/09/08 13:45:55 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int		i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i += 1;
	}
	if (i < n)
	{
		while (i < n)
		{
			dest[i] = '\0';
			i += 1;
		}
		dest[i] = '\0';
	}
	return (dest);
}
