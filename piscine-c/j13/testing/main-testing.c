#include <stdio.h>
#include <stdlib.h>
#include "ft_btree.h"
#include "testing.h"

int		smaller_than(void *n1, void *n2)
{
	return (*((int*)n1) - *((int*)n2));
}

int		main(int ac, char **av)
{
	t_btree	*tree;
	int		i;
	int		data;
	void	*null_data;
	int		tab[] = { 4, 1, 2, 0, 6, 5 };

	if (ac != 2)
		return (0);
	tree = NULL;
	data = atoi(av[1]);
	i = 0;
	while (i < 6)
		btree_insert_data(&tree, &tab[i++], &smaller_than);
	null_data = btree_search_item(tree, &data, &smaller_than);
	if (null_data)
		ft_putnbr(null_data);
	return (0);
}
