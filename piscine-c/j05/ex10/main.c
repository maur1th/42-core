#include <stdio.h>
#include <string.h>
#include "ft_str_is_lowercase.c"

int		main(void)
{
	char	s[] = "iafgB";
	char	s2[] = "afghjk";
	
	printf("%d\n", ft_str_is_lowercase(s));
	printf("%d\n", ft_str_is_lowercase(s2));
	return (0);
}
