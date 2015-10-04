#include <stdio.h>
#include "ft_sqrt.c"

int		main(void)
{
	printf("%d: %d\n", 64, ft_sqrt(64));
	printf("%d: %d\n", 4194304, ft_sqrt(4194304));
	printf("%d: %d\n", 0, ft_sqrt(0));
}
