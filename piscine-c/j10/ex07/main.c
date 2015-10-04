// #include "ft_sort_wordtab.c"

char				**ft_split_whitespaces(char *str);
void				ft_putstr(char *str);
void				ft_sort_wordtab(char **tab);

void	print_table(char **tab)
{
	while (**tab != '\0')
	{
		ft_putstr(*(tab++));
		ft_putstr("\n");
	}
}

int		main(int argc, char **argv)
{
	char	**tab;

	if (argc == 2)
	{
		tab = ft_split_whitespaces(argv[1]);
		ft_sort_wordtab(tab);
		print_table(tab);
	}
	return (0);
}
