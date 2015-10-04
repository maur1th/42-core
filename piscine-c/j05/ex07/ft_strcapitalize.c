/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/08 16:30:25 by tmaurin           #+#    #+#             */
/*   Updated: 2015/09/09 12:31:51 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_alpha(char c)
{
	if ((c < 'a' || c > 'z') && (c < 'A' || c > 'Z'))
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	unsigned int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_alpha(str[i]) && i == 0)
			str[i] = str[i] <= 'Z' ? str[i] : str[i] - 32;
		else if (is_alpha(str[i]) && !is_alpha(str[i - 1]))
			str[i] = str[i] <= 'Z' ? str[i] : str[i] - 32;
		else if (is_alpha(str[i]) && is_alpha(str[i - 1]))
			str[i] = str[i] >= 'a' ? str[i] : str[i] + 32;
		i += 1;
	}
	return (str);
}
