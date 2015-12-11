/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tm <tm@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 19:59:04 by tm                #+#    #+#             */
/*   Updated: 2015/12/11 15:52:31 by tm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int main()
{
	t_matrix	*m1;
	t_matrix	*m2;
	size_t		size;

	size = 6;
	m1 = ft_newmatrix(size);
	m2 = ft_newmatrix(size);
	ft_setmatval(m1, 4, 2, '1');
	ft_setmatval(m2, 2, 1, '1');
	ft_addmatrices(m1, m2);
	ft_putmatrix(m1);
	return (0);
}
