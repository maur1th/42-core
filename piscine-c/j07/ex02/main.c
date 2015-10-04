#include <stdio.h>
#include <stdlib.h>
#include "ft_ultimate_range.c"

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
	int		result;
	int		min;
	int		max;

	if (argc == 3)
	{
		min = atoi(argv[1]);
		max = atoi(argv[2]);
		result = ft_ultimate_range(&tab, min, max);
		print_tab(tab, max - min);
		printf("%d\n", result);
	}
	return (0);
}