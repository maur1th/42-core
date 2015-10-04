#include "ft_list.h"

void	ft_putstr(char *str);
t_list	*ft_create_elem(void *data);
void	ft_list_push_front(t_list **begin_list, void *data);
t_list	*ft_list_last(t_list *begin_list);

void	print_list(t_list *list)
{
	while (list)
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
	ft_list_push_front(&list, "pim");
	print_list(list);
	ft_list_push_front(&list, "pam");
	print_list(list);
	ft_list_push_front(&list, "poum");
	print_list(list);
	ft_putstr(ft_list_last(list)->data);
	return (0);
}
