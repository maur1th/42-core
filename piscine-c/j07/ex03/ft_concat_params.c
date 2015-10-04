/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/10 16:32:46 by tmaurin           #+#    #+#             */
/*   Updated: 2015/09/10 16:33:01 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int		len;
	int		i;

	len = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[len + i] = src[i];
		i += 1;
	}
	return (dest);
}

char	*ft_concat_params(int argc, char **argv)
{
	char		*str;
	int			length;
	int			i;

	length = 0;
	i = 1;
	while (i < argc)
		length += ft_strlen(argv[i++]);
	str = (char*)malloc(sizeof(*str) * (length + argc));
	i = 1;
	while (i < argc)
	{
		ft_strcat(str, argv[i++]);
		if (i != argc)
			ft_strcat(str, "\n");
	}
	str[length] = '\0';
	return (str);
}
