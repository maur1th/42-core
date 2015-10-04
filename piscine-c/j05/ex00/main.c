#include <stdio.h>
#include <string.h>
#include "ft_strcpy.c"

int		main(void)
{
	char	src[200] = "hey, you :)";
	char	dest[200] = "bye";

	printf("src %s\ndest %s\n", src, dest);
	strcpy(dest, src);
	printf("src %s\ndest %s\n", src, dest);
	return (0);
}
