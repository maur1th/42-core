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
	// t_mtx	*m1;
	t_mtx	*m2;
	t_mtx	*m2_padded;

	// m1 = ft_mtxnew(6, 6);
	m2 = ft_mtxnew(3, 2);
	ft_mtxset(m2, 0, 0, '1');
	ft_mtxset(m2, 1, 0, '1');
	ft_mtxset(m2, 1, 1, '1');
	ft_mtxset(m2, 2, 1, '1');
	m2_padded = ft_mtxpad(m2, 5, 6);
	// ft_mtxadd(m1, m2);
	ft_putmtx(m2);
	ft_putstr("======\n");
	ft_putmtx(m2_padded);
	return (0);
}
