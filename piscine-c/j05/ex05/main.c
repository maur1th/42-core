#include <stdio.h>
#include <string.h>
#include "ft_strlowcase.c"

int		main(void)
{
	char	s[] = "CacO--  +tTE 1256";
	
	printf("%s\n", ft_strlowcase(s));
	return (0);
}
