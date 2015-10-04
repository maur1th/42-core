#include <stdio.h>
#include "ft_max.c"

int		main(void)
{
	int		tab[4] = {-322, 133, 12, -567};

	printf("%d\n", ft_max(tab, 4));
	return (0);
}