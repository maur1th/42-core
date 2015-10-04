void	ft_putnbr(int nb);
int		ft_strlen(char *str);
int		ft_any(char **tab, int (*f)(char*));

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		is_a(char *str)
{
	if (*str == 'a')
		return (1);
	return (0);
}

int		main(void)
{
	char	*array[] = {"d", "bonjour les gens ", "comment ca va", "\0"};

	ft_putnbr(ft_any(array, &ft_strlen));
	return (0);
}
