#include "ft_ft.c"
#include <stdio.h>

int		main()
{
	// declare an int
	int		nb;
	// declare pointer on int
	int		*ptr;

	nb = 10;	
	ptr = &nb;
	printf("%d\n", nb);
	ft_ft(ptr);
	printf("%d\n", nb);
	return (0);
}
