#include "ft_putnbr.c"
#include "ft_putchar.c"
#include <stdio.h>

int		main()
{
	int		i;

	i = 0;
	ft_putnbr(2114819797);
	ft_putchar('\n');
	ft_putnbr(-912633219);
	ft_putchar('\n');
	ft_putnbr(0);
	ft_putchar('\n');
	ft_putnbr(2147483648);
	ft_putchar('\n');
	ft_putnbr(2147483647);
	ft_putchar('\n');
	ft_putnbr(2147483649);
	ft_putchar('\n');
	/* while (i < 400)
	{
		ft_putnbr(2147483647 + i);
		ft_putchar('\n');
		i++;
	} */
	return (0);
}
