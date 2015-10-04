void	ft_putnbr(int nb);
void	ft_putchar(char c);
int		*ft_map(int *tab, int length, int (*f)(int));

void	print_tab(int *tab, int length)
{
	int		i;

	i = 0;
	while (i < length)
	{
		ft_putnbr(tab[i++]);
		ft_putchar(' ');
	}
	ft_putchar('\n');
}

int		decrement(int n)
{
	return (n - 1);
}

int		main(void)
{
	int		tab[] = {4, 82, 16, 13};
	int		*cpy;

	cpy = ft_map(tab, 4, &decrement);
	print_tab(tab, 4);
	print_tab(cpy, 4);
	return (0);
}
