#include <stdio.h>
#include <stdlib.h>
#include "ft_sort_integer_table.c"


void	print_table(int *tab, int size)
{
	int		i;

	i = 0;
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
}

int		main()
{
	int		tab[] = {-12, 1, -124567890, -1500};

	print_table(tab, 4);
	ft_sort_integer_table(tab, 4);
	print_table(tab, 4);
	return (0);
}
