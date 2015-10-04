#include <stdlib.h>
#include "ft_list.h"

void	ft_putstr(char *str);
void	ft_putnbr(int nb);
void	ft_list_push_back(t_list **begin_list, void *data);
void	ft_list_reverse(t_list **begin_list);

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
	ft_list_push_back(&list, "pam");
	ft_list_push_back(&list, "poum");
	ft_list_push_back(&list, "pif");
	print_list(list);
	ft_list_reverse(&list);
	print_list(list);
	return (0);
}
