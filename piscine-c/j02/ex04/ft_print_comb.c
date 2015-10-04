/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/03 11:11:53 by tmaurin           #+#    #+#             */
/*   Updated: 2015/09/03 12:21:52 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_put_three_chars(char first_num, char second_num, char third_num)
{
	ft_putchar(first_num);
	ft_putchar(second_num);
	ft_putchar(third_num);
	if (first_num != '7' || second_num != '8' || third_num != '9')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

int		ft_do_print(char first_num, char second_num, char third_num)
{
	if (first_num >= second_num || second_num >= third_num)
		return (0);
	return (1);
}

void	ft_print_comb(void)
{
	int		first_num;
	int		second_num;
	int		third_num;

	first_num = '0';
	second_num = '0';
	third_num = '0';
	while (first_num <= '9')
	{
		while (second_num <= '9')
		{
			while (third_num <= '9')
			{
				if (ft_do_print(first_num, second_num, third_num))
					ft_put_three_chars(first_num, second_num, third_num);
				third_num++;
			}
			third_num = '0';
			second_num++;
		}
		second_num = '0';
		first_num++;
	}
}
