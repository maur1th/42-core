#include <stdio.h>
#include <string.h>
#include "ft_strstr.c"

int		main(void)
{
	char	*largestring = "Foo Bar Baz";
	char	*ptr;

	ptr = ft_strstr(largestring, "Bar");
	printf("%s\n", ptr);
	ptr = ft_strstr(largestring, "Fom");
	printf("%s\n", ptr);
	ptr = ft_strstr(largestring, "");
	printf("%s\n", ptr);
	return (0);
}
