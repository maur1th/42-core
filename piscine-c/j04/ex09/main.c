#include <unistd.h>
#include "ft_eight_queens_puzzle_2.c"

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int		main()
{
	ft_eight_queens_puzzle_2();
	return (0);
}
