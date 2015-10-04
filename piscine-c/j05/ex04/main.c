#include <stdio.h>
#include <string.h>
#include "ft_strncmp.c"

int		main(void)
{
	char	*s1 = "teat";

	printf("%d\n", strncmp(s1, "test", 2));
	printf("%d\n", ft_strncmp(s1, "test", 2));
	return (0);
}
