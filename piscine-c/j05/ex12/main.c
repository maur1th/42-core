#include <stdio.h>
#include <string.h>
#include "ft_str_is_printable.c"

int		main(void)
{
	char	s[] = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ!\"#$%&\'()*+,-./:;<=>?@[\\]^_`{|}~";
	char	s2[] = "ABCHF\n\t";
	
	printf("%d\n", ft_str_is_printable(s));
	printf("%d\n", ft_str_is_printable(s2));
	return (0);
}
