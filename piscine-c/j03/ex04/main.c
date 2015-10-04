#include "ft_ultimate_div_mod.c"
#include <stdio.h>

int		main()
{
	int		nb1;
	int		nb2;

	nb1 = 50;
	nb2 = 3;
	printf("%d %d\n", nb1, nb2);
	ft_ultimate_div_mod(&nb1, &nb2);
	printf("%d %d\n", nb1, nb2);
	return (0);
}
