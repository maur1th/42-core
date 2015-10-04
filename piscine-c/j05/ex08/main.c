#include <stdio.h>
#include <string.h>
#include "ft_str_is_alpha.c"

int		main(void)
{
	char	s[] = "CacO--a tHe +tTE 1256";
	char	s2[] = "Hello";
	
	printf("%d\n", ft_str_is_alpha(s));
	printf("%d\n", ft_str_is_alpha(s2));
	return (0);
}
