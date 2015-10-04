#include <stdio.h>
#include <string.h>
#include "ft_str_is_numeric.c"

int		main(void)
{
	char	s[] = "CacO--a tHe +tTE 1256";
	char	s2[] = "23567";
	
	printf("%d\n", ft_str_is_numeric(s));
	printf("%d\n", ft_str_is_numeric(s2));
	return (0);
}
