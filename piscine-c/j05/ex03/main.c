#include <stdio.h>
#include <string.h>
#include "ft_strcmp.c"

int		main(void)
{
	char	*s1 = "atest";

	printf("%d\n", strcmp(s1, "test"));
	printf("%d\n", ft_strcmp(s1, "test"));
	return (0);
}
