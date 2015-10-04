#include <stdio.h>
#include "ft_iterative_factorial.c"

int		main(void)
{
	printf("5 %d\n", ft_iterative_factorial(5));
	printf("0 %d\n", ft_iterative_factorial(0));
	printf("-5 %d\n", ft_iterative_factorial(-5));
	printf("12 %d\n", ft_iterative_factorial(12));
	printf("13 %d\n", ft_iterative_factorial(13));
}
