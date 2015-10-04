#include <stdio.h>
#include "ft_strcat.c"

int     main(void)
{
	char	s1[] = "hello";
	char	s2[] = "you";

	printf("%s\n", ft_strcat(s1, s2));
    return (0);
}