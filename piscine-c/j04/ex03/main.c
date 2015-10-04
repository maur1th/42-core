#include <stdio.h>
#include "ft_recursive_power.c"

int		main(void)
{
	printf("2**2 %d\n", ft_recursive_power(2, 2));
	printf("1**0 %d\n", ft_recursive_power(1, 0));
	printf("-5**2 %d\n", ft_recursive_power(-5, 2));
	printf("-5**3 %d\n", ft_recursive_power(-5, 3));
	printf("0**0 %d\n", ft_recursive_power(0, 0));
	printf("0**2 %d\n", ft_recursive_power(0, 2));
	printf("4**-2 %d\n", ft_recursive_power(4, -2));
	printf("2**10 %d\n", ft_recursive_power(2, 10));
}
