/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrixshift.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Genevieve <Genevieve@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 19:43:57 by tm                #+#    #+#             */
/*   Updated: 2015/12/22 00:26:53 by Genevieve        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fillit.h>

t_matrix	*matrixshift(t_matrix *m, t_matrix *p)
{
	char	*ptr;
	char	*p_data;
	size_t	i;

	ptr = m->data;
	p_data = p->data;
	i = 0;
	while (*ptr != '\0')
	{
			ft_putnbr((ptr - m->data) % m->width + p->width);
			ft_putchar('\n');

		if (*(ptr) == '1')
		{

			if ((ptr - m->data) % m->width + p->width > m->width)
			{
				ft_putstr("in\n");
				// ft_memset(ptr, '0', p->width);
				*ptr = 'A';
				ptr += p->width;
				return (m);
			}
			else
			{
				*(ptr) = '0';
				ptr += 1;
			}
			while(p_data[i] != '1')
				i += 1;
			ft_strncpy(ptr, &(p_data[i]), p->width - i % p->width);
			i += p->width;
			ptr += p->width;
		}
		ptr += 1;
	}
	return (m);
}
