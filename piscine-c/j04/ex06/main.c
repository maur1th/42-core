#include <stdio.h>
#include "ft_is_prime.c"

int		main(void)
{
	for (int i = 0; i <= 100; i++)
		if (ft_is_prime(i))
		   	printf("%d is prime\n", i);
	printf("%d %d\n", -2495, ft_is_prime(-2495));
}
