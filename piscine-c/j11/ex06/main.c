#include "ft_list.h"

void	ft_putstr(char *str);
t_list	*ft_create_elem(void *data);
t_list	*ft_list_push_params(int ac, char **av);
void	ft_list_clear(t_list **begin_list);

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
	t_list	*list;

	list = ft_list_push_params(argc, argv);
	print_list(list);
	ft_list_clear(&list);
	print_list(list);
	return (0);
}
