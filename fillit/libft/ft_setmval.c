/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_setmval.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/05 10:48:12 by tmaurin           #+#    #+#             */
/*   Updated: 2015/12/05 16:29:27 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_setmval(char *matrix, size_t size, size_t *coord, char value)
{
	matrix[coord[0] + coord[1] * size] = value;
}
