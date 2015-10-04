#include <stdio.h>
#include <stdlib.h>
#include "ft_atoi.c"

int		main()
{
	printf("orig: %d\n", atoi("-2147483648"));
	printf("pers: %d\n", ft_atoi("-2147483648"));
	
	printf("orig: %d\n", atoi("214 7483648"));
	printf("pers: %d\n", ft_atoi("214 7483648"));
	
	printf("orig: %d\n", atoi("  -2147483648"));
	printf("pers: %d\n", ft_atoi("  -2147483648"));
	
	printf("orig: %d\n", atoi("213648"));
	printf("pers: %d\n", ft_atoi("213648"));
	
	printf("orig: %d\n", atoi("2147483648"));
	printf("pers: %d\n", ft_atoi("2147483648"));
	
	printf("orig: %d\n", atoi("abc"));
	printf("pers: %d\n", ft_atoi("abc"));
	
	printf("orig: %d\n", atoi("0"));
	printf("pers: %d\n", ft_atoi("0"));
	return (0);
}
