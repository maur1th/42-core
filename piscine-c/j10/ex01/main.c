void	ft_putnbr(int nb);
void	ft_foreach(int *tab, int length, void(*f)(int));

int		main(void)
{
	int		tab[] = {4, 82, 16, 13};

	ft_foreach(tab, 4, &ft_putnbr);
}
