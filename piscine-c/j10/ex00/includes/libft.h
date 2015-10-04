/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/15 11:35:48 by tmaurin           #+#    #+#             */
/*   Updated: 2015/09/15 11:37:05 by tmaurin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>

typedef struct		s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;

typedef struct			s_btree
{
	struct s_rb_node	*right;
	struct s_rb_node	*left;
	void				*item;
}						t_btree;

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
void	ft_swap(int *a, int *b);
void	ft_putnbr(int nb);
char	**ft_split_whitespaces(char *str);
t_list	*ft_create_elem(void *data);
void	ft_list_push_back(t_list **begin_list, void *data);
void	ft_list_push_front(t_list **begin_list, void *data);
t_list	*ft_list_push_params(int ac, char **av);
int		ft_list_size(t_list *begin_list);
t_btree	*btree_create_node(void *item);

#endif
