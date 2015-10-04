/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/15 21:33:46 by tmaurin           #+#    #+#             */
/*   Updated: 2015/09/15 21:49:19 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str)
{
	while (*str != '\0')
		ft_putchar(*(str++));
}

void	ft_print(int nb)
{
	if (nb < 10)
	{
		ft_putchar('0' + nb);
	}
	else
	{
		ft_print(nb / 10);
		ft_print(nb % 10);
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putstr("-2147483648");
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	ft_print(nb);
}

void	print_tab(char **tab)
{
	while (**tab != '\0')
	{
		ft_putstr(*(tab++));
		ft_putstr("\n");
	}
}

void	ft_show_tab(t_stock_par *par)
{
	int				i;

	i = 0;
	while (par[i].str[0] != '\0')
	{
		ft_putstr(par[i].copy);
		ft_putstr("\n");
		ft_putnbr(par[i].size_param);
		ft_putstr("\n");
		print_tab(par[i].tab);
		i += 1;
	}
}
