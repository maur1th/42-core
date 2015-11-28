# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/09/21 10:13:22 by tmaurin           #+#    #+#              #
#    Updated: 2015/09/25 15:26:24 by tmaurin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= libft.a
TEST		= test
CC 			= gcc
CFLAGS		= -Wall -Wextra -Werror

HEADERS 	= ./includes/
SRC			= ./ft_strlen.c \
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

clean:
	/bin/rm -f $(OBJ)
	/bin/rm -f $(MAIN)

fclean: clean
	/bin/rm -f $(NAME)
	/bin/rm -f $(TEST)

re: fclean all
