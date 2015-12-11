/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tm <tm@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 19:59:04 by tm                #+#    #+#             */
/*   Updated: 2015/12/11 15:16:17 by tm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int main()
{
	t_matrix	*matrix;
	size_t	size;

	size = 6;
	matrix = ft_newmatrix(size);
	ft_setmatval(matrix, 4, 2, '2');
	ft_putmatrix(matrix);
	return (0);
}
