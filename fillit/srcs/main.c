/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tm <tm@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 19:59:04 by tm                #+#    #+#             */
/*   Updated: 2015/12/12 15:52:53 by tm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>
#include <fillit.h>

int main()
{
	// t_matrix	*m1;
	t_matrix	*m2;
	t_matrix	*m2_padded;
	size_t		i;

	// m1 = ft_matrixnew(6, 6);
	m2 = ft_matrixnew(3, 2);
	ft_matrixset(m2, 0, 0, '1');
	ft_matrixset(m2, 0, 1, '1');
	ft_matrixset(m2, 1, 1, '1');
	ft_matrixset(m2, 2, 1, '1');
	m2_padded = ft_matrixpad(m2, 5, 6);
	// ft_matrixadd(m1, m2);
	ft_putmatrix(m2);
	ft_putstr("======\n");
	ft_putmatrix(m2_padded);
	ft_putstr("======\n");
	i = 0;
	while(matrixshift(m2_padded, m2) && i < 5)
	{
		ft_putmatrix(m2_padded);
		ft_putstr("======\n");
		i += 1;
	}
	return (0);
}
