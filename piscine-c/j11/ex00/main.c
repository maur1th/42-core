#include "ft_list.h"

void	ft_putstr(char *str);
t_list				*ft_create_elem(void *data);

void	print_list(t_list *list)
{
	while (list != NULL)
	{
		ft_putstr(list->data);
		list = list->next;
	}
}

int		main(void)
{
	t_list	*node;

	node = NULL;
	node = ft_create_elem("test");
	print_list(node);
	return (0);
}
