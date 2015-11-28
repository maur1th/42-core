# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/28 14:40:16 by tmaurin           #+#    #+#              #
#    Updated: 2015/11/28 16:36:20 by tmaurin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= libft.a
TEST		= test
CC 			= gcc
CFLAGS		= -Wall -Wextra -Werror

HEADERS 	= ./includes/
SRC			= ./ft_memset.c \
			  ./ft_bzero.c \
			  ./ft_memcpy.c \
			  ./ft_memccpy.c \
			  ./ft_memmove.c \
			  ./ft_memchr.c \
			  ./ft_memcmp.c \
			  ./ft_strlen.c \
			  ./ft_strdup.c \
			  ./ft_strcpy.c \
			  ./ft_strcat.c \
			  ./ft_strncat.c \
			  ./ft_strlcat.c \
			  ./ft_strcmp.c \
			  ./ft_putchar.c \
			  ./ft_putstr.c \
			  ./ft_putendl.c \
			  ./ft_putnbr.c \
			  ./ft_putchar_fd.c \
			  ./ft_putstr_fd.c \
			  ./ft_putnbr_fd.c \
			  ./ft_putendl_fd.c
OBJ			= $(SRC:.c=.o)
MAIN		= ./main.o

all: $(NAME) $(TEST)

$(NAME): $(OBJ)
	ar rc $@ $^
	ranlib $@

$(TEST): $(NAME) $(MAIN)
	$(CC) -o $@ $(MAIN) -L . -lft

%.o: %.c
	$(CC) -o $@ -c $(CFLAGS) $<

pretty_test:
	$(CC) -o $@ $(CFLAGS) $@.c

clean:
	/bin/rm -f $(OBJ)
	/bin/rm -f $(MAIN)

fclean: clean
	/bin/rm -f $(NAME)
	/bin/rm -f $(TEST)

re: fclean all
