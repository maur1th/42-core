#include <stdio.h>
#include <string.h>
#include "ft_strncpy.c"

int		main(void)
{
	char	src[] = "hello";
	char	src2[] = "hello";
	char	dest[] = "bye";
	char	dest2[] = "bye";

	printf("srce %s: %s\n", src, dest);
	ft_strncpy(dest, src, 5);
	printf("pers: %s: %s\n", src, dest);
	strncpy(dest2, src2, 5);
	printf("stlb: %s: %s\n", src2, dest2);
	return (0);
}
