#include "ft_stock_par.h"
#include "ft_param_to_tab.c"
#include <unistd.h>

void	ft_putnbr(int nb);
void	ft_putstr(char *str);

void	print_tab(char **tab)
{
	while (**tab != '\0')
	{
		ft_putstr(*(tab++));
		ft_putstr("\n");
	}
}

int		main(int argc, char **argv)
{
	t_stock_par		*tab;
	int				i;

	tab = ft_param_to_tab(argc, argv);
	i = 0;
	while (i < argc)
	{
		ft_putstr(tab[i].str);
		ft_putstr("\n");
		ft_putstr(tab[i].copy);
		ft_putstr("\n");
		ft_putnbr(tab[i].size_param);
		ft_putstr("\n");
		print_tab(tab[i].tab);
		ft_putstr("\n");
		i += 1;
	}
	ft_putstr(tab[i].str);
	ft_putstr("\n");
}
