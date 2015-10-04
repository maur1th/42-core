#include <stdio.h>
#include <stdlib.h>
#include "ft_find_next_prime.c"

int		main(int argc, char **argv)
{
	argc += 1;
   	printf("%d next prime %d\n", 95, ft_find_next_prime(argv[1]));
   	return (0);
}
