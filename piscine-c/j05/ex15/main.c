#include <stdio.h>
#include "ft_strlcat.c"

int     main(void)
{
	char	s1[] = "hello";
	char	s2[] = "you";

	printf("%s\n", ft_strncat(s1, s2, 2));
    return (0);
}