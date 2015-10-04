#include <stdio.h>
#include <string.h>
#include "ft_strcapitalize.c"

int		main(int argc, char **argv)
{
	argc += 1;
	printf("%s\n", ft_strcapitalize(argv[1]));
	return (0);
}
