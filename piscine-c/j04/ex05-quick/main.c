#include <stdio.h>
#include <stdlib.h>
#include "ft_quicksqrt.c"

int		main(int argc, char **argv)
{
	argc += 1;
	if (argv[1])
		printf("sqrt(%d) = %d\n", atoi(argv[1]), ft_quicksqrt(atoi(argv[1])));
	else
		printf("Missing int.\n");
}
