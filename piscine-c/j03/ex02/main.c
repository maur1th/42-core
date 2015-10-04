#include "ft_swap.c"
#include <stdio.h>

int		main()
{
	// declare an int
	int		nb1;
	int		nb2;

	nb1 = 24;
	nb2 = 86;
	printf("%d %d\n", nb1, nb2);
	ft_swap(&nb1, &nb2);
	printf("%d %d\n", nb1, nb2);
	return (0);
}
