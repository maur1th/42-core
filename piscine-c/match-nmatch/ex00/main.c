#include <stdio.h>
#include "match.c"

int		match(char *s1, char *s2);

int		main(int argc, char **argv)
{
	argc++;
	printf("%d", match(argv[1], argv[2]));
}