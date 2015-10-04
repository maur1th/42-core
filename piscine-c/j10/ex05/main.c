void	ft_putnbr(int nb);
int		ft_is_sort(int *tab, int length, int(*f)(int, int));

int		cmp(int n1, int n2)
{
	return (n1 - n2);
}

int		main(void)
{
	int		array[] = {0, -2, -1};

	ft_putnbr(ft_is_sort(array, 3, &cmp));
	return (0);
}
