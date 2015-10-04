/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/09 18:46:43 by tmaurin           #+#    #+#             */
/*   Updated: 2015/09/10 19:31:29 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str != '\0')
		ft_putchar(*(str++));
}

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i += 1;
	}
	return (s1[i] - s2[i]);
}

void	sort_argv(int argc, char **argv)
{
	int		i;
	int		stop;
	char	*ptr;

	stop = 0;
	while (!stop)
	{
		stop = 1;
		i = 1;
		while (i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				stop = 0;
				ptr = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = ptr;
			}
			i += 1;
		}
	}
}

int		main(int argc, char **argv)
{
	int		i;

	i = 1;
	sort_argv(argc, argv);
	while (i < argc)
	{
		ft_putstr(argv[i++]);
		ft_putchar('\n');
	}
	return (0);
}
