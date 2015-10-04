#include "ft_list.h"

void	ft_putstr(char *str);
void	ft_putnbr(int nb);
t_list	*ft_create_elem(void *data);
void	ft_list_push_back(t_list **begin_list, void *data);
int		ft_list_size(t_list *begin_list);

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
	ft_putnbr(ft_list_size(list));
	print_list(list);
	return (0);
}
