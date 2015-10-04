#include <unistd.h>
#include <stdlib.h>

char    *ft_itoa_base(int value, int base);

void    ft_putstr(char *s)
{
    while (*s != '\0')
        write(1, s++, 1);
}

int     main(int ac, char **av)
{
    char    *s;

    if (ac == 3)
    {
        s = ft_itoa_base(atoi(av[1]), atoi(av[2]));
        ft_putstr(s);
        ft_putstr("\n");
        free(s);
    }
    return (0);
}