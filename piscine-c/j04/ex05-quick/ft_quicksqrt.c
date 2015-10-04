#include <stdio.h>


int		ft_solve(int *tab, int length, int nb)
{
	printf("%i\n", tab[length/2]);
	if (tab > &tab[length])
		return (-1);
	if (tab[length/2] * tab[length/2] == nb)
		return(tab[length/2]);
	else if (tab[length/2] > nb)
		return ft_solve(&tab[length/2], length / 2, nb);
	else
		return ft_solve(tab, length / 2, nb);
}

int		ft_quicksqrt(int nb)
{
	int			tab[nb];
	int			length;
	int			i;

	length = nb;
	i = 0;
	while (i++ < nb)
		tab[i] = i;

	return (ft_solve(tab, length, nb));
}