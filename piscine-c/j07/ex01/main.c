#include <stdio.h>
#include <stdlib.h>
#include "ft_range.c"

void	print_tab(int *tab, int length)
{
	int		i;

	i = 0;
	while (i < length)
		printf("%d ", tab[i++]);
	printf("\n");
}

int		main(int argc, char **argv)
{
	int		*tab;
	int		min;
	int		max;

	if (argc == 3)
	{
		min = atoi(argv[1]);
		max = atoi(argv[2]);
		tab = ft_range(min, max);
		print_tab(tab, max - min);
	}
	return (0);
}