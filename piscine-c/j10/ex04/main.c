void	ft_putnbr(int nb);
int		ft_strlen(char *str);
int		ft_count_if(char **tab, int (*f)(char*));

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
	char	*array[] = {"d", "aa", "v", "\0", "v"};

	ft_putnbr(ft_count_if(array, &ft_strlen));
	return (0);
}
