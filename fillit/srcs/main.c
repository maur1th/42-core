/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 19:59:04 by tm                #+#    #+#             */
/*   Updated: 2015/12/05 16:31:58 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int main()
{
	t_matrix	*matrix;
	size_t	size;

	size = 6;
	matrix = ft_newm(size);
	ft_setmval(matrix, size, coord, '2');
	ft_putm(matrix, size);
	return (0);
}
