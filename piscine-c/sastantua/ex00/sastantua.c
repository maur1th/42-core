/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/06 10:13:54 by tmaurin           #+#    #+#             */
/*   Updated: 2015/09/06 21:56:07 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		get_top_size(int size)
{
	int		i;
	int		top_size;
	int		increment;

	i = 1;
	top_size = 1 ? size > 0 : 0;
	increment = 10;
	while (i < size)
	{
		top_size += increment;
		if (i % 2 == 1)
			increment += 2;
		else
			increment += 4;
		i++;
	}
	return (top_size);
}

void	print_sastantua(int size, int i, int line, int caret)
{
	int		door;
	int		base_size;

	base_size = get_top_size(size) + 2 * (1 + size) + 2;
	door = size % 2 == 1 ? size : size - 1;
	while (caret < (base_size + get_top_size(i)) / 2 + line)
	{
		if (i == size && line > i + 1 - door
			&& (caret >= (base_size - door) / 2
				&& caret < (base_size + door) / 2))
		{
			if (size > 4 && caret == (base_size + door) / 2 - 2
				&& line == i + 2 + door / 2 - door)
				ft_putchar('$');
			else
				ft_putchar('|');
		}
		else
			ft_putchar('*');
		caret += 1;
	}
}

void	sastantua(int size)
{
	int		i;
	int		base_size;
	int		line;
	int		caret;

	i = 1;
	base_size = get_top_size(size) + 2 * (1 + size) + 2;
	while (i <= size)
	{
		line = 0;
		while (line < i + 2)
		{
			caret = 0;
			while (caret++ < ((base_size - get_top_size(i)) / 2 - 1) - line)
				ft_putchar(' ');
			ft_putchar('/');
			print_sastantua(size, i, line, caret);
			ft_putchar('\\');
			ft_putchar('\n');
			line += 1;
		}
		i++;
	}
}
