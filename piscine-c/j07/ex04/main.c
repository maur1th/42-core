#include <unistd.h>

char	**ft_split_whitespaces(char *str);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
		ft_putchar(*(str++));
}

void	ft_print_tab(char **tab)
{
	while(*tab)
	{
		ft_putstr(*(tab++));
		ft_putchar('\n');
	}
}

int		main(int argc, char **argv)
{
	char	**tab;

	if (argc == 2)
	{
		tab = ft_split_whitespaces(argv[1]);
		ft_print_tab(tab);
	}
	return (0);
}
