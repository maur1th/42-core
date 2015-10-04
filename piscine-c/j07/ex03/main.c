#include <unistd.h>
#include "ft_concat_params.c"

void	ft_putstr(char *str)
{
	while (*str != '\0')
		write(1, str++, 1);
}

int		main(int argc, char **argv)
{
	char	*result;

	if (argc > 1)
	{
		result = ft_concat_params(argc, argv);
		ft_putstr(result);
	}
	return (0);
}
