#include "ft_collatz_conjecture.c"

int		main(void)
{
	int		i;

	i = 0;
	while (i++ <= 24)
		printf("%d: %d\n", i, ft_collatz_conjecture(i));
	return (0);
}