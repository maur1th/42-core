#include <stdio.h>
#include "ft_strlen.c"

int		main()
{
	char*	s;
	int		i;

	s = "Hello, you ;)";
	i = ft_strlen(s);
	printf("%d\n", i);
	s = "";
	i = ft_strlen(s);
	printf("%d\n", i);
	s = "123";
	i = ft_strlen(s);
	printf("%d\n", i);
	return (0);
}
