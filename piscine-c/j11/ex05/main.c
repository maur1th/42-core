#include "ft_list.h"

void	ft_putstr(char *str);
t_list	*ft_list_push_params(int ac, char **av);

void	print_list(t_list *list)
{
	while (list != NULL)
	{
		ft_putstr(list->data);
		ft_putstr("->");
		list = list->next;
	}
	ft_putstr("\n");
}

int		main(int argc, char **argv)
{
	print_list(ft_list_push_params(argc, argv));		
	return (0);
}
