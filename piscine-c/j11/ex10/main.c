#include <stdlib.h>
#include "ft_list.h"

void	ft_putstr(char *str);
void	ft_putnbr(int nb);
void	ft_list_push_back(t_list **begin_list, void *data);
void	ft_list_foreach(t_list *begin_list, void (*f)(void *));

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

int		increment(int *nb)
{
	return (*nb + 1);
}

int		main(void)
{
	t_list	*list;
	int		n1;
	int		n2;
	int		n3;

	n1 = 2;
	n2 = 3;
	n3 = 5;
	list = NULL;
	ft_list_push_back(&list, "COUCOU\n");
	ft_list_push_back(&list, "42\n");
	ft_list_push_back(&list, "LOL\n");
	// print_list(list);
	ft_list_foreach(list, &ft_putstr);
	print_list(list);
	return (0);
}
