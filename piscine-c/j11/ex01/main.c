#include "ft_list.h"

void	ft_putstr(char *str);
void	ft_list_push_back(t_list **begin_list, void *data);

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

int		main(void)
{
	t_list	*list;

	list = NULL;
	ft_list_push_back(&list, "pim");
	print_list(list);
	ft_list_push_back(&list, "pam");
	print_list(list);
	ft_list_push_back(&list, "poum");
	print_list(list);
	return (0);
}
