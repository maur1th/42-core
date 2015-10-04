#include <stdlib.h>
#include "ft_list.h"

void	ft_putstr(char *str);
void	ft_putnbr(int nb);
void	ft_list_push_back(t_list **begin_list, void *data);
t_list	*ft_list_at(t_list *begin_list, unsigned int nbr);

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
	t_list	*buf;

	if (argc == 1)
		return (0);
	list = NULL;
	ft_list_push_back(&list, "pim");
	print_list(list);
	ft_list_push_back(&list, "pam");
	print_list(list);
	ft_list_push_back(&list, "poum");
	print_list(list);
	buf = ft_list_at(list, atoi(argv[1]));
	if (buf)
		ft_putstr(buf->data);
	ft_putstr("\n");
	return (0);
}
