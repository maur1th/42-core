#ifndef TESTING_H
# define TESTING_H
# include <unistd.h>
# include "ft_btree.h"

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(void *void_nb);

void	btree_insert_data(t_btree **root, void *item,
						  int (*cmpf)(void *, void *));
void	btree_apply_prefix(t_btree *root, void (*applyf)(void *));
void	btree_apply_infix(t_btree *root, void (*applyf)(void *));
void	btree_apply_suffix(t_btree *root, void (*applyf)(void *));
void	*btree_search_item(t_btree *root, void *data_ref,
						   int (*cmpf)(void *, void *));

#endif
