/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tm <tm@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 19:59:04 by tm                #+#    #+#             */
/*   Updated: 2015/12/11 19:30:22 by tm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int main()
{
	// t_matrix	*m1;
	t_matrix	*m2;
	t_matrix	*m2_padded;

	// m1 = ft_matrixnew(6, 6);
	m2 = ft_matrixnew(3, 2);
	ft_matrixset(m2, 0, 0, '1');
	ft_matrixset(m2, 1, 0, '1');
	ft_matrixset(m2, 1, 1, '1');
	ft_matrixset(m2, 2, 1, '1');
	m2_padded = ft_matrixpad(m2, 5, 6);
	// ft_matrixadd(m1, m2);
	ft_putmatrix(m2);
	ft_putstr("======\n");
	ft_putmatrix(m2_padded);
	return (0);
}
