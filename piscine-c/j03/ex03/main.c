#include "ft_div_mod.c"
#include <stdio.h>

int		main()
{
	int		nb1;
	int		nb2;
	int		div;
	int		mod;

	nb1 = 50;
	nb2 = 3;
	printf("%d %d\n", nb1, nb2);
	ft_div_mod(nb1, nb2, &div, &mod);
	printf("%d %d\n", div, mod);
	return (0);
}
