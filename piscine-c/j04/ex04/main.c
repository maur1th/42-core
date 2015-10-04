#include <stdio.h>
#include "ft_fibonacci.c"

int		main(void)
{
	for (int i = -1; i <= 10; i++)
		printf("%d: %d\n", i, ft_fibonacci(i));
}
