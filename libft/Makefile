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
SRC			= ./srcs/ft_strlen.c \
			  ./srcs/ft_strdup.c \
			  ./srcs/ft_strcpy.c \
			  ./srcs/ft_strcat.c \
			  ./srcs/ft_strcmp.c \
			  ./srcs/ft_putchar.c \
			  ./srcs/ft_putstr.c \
			  ./srcs/ft_putendl.c \
			  ./srcs/ft_putnbr.c \
			  ./srcs/ft_putchar_fd.c \
			  ./srcs/ft_putstr_fd.c \
			  ./srcs/ft_putnbr_fd.c \
			  ./srcs/ft_putendl_fd.c
OBJ			= $(SRC:.c=.o)
MAIN		= ./srcs/main.o

all: $(NAME) $(TEST)

$(NAME): $(OBJ)
	ar rc $@ $^
	ranlib $@

$(TEST): $(NAME) $(MAIN)
	$(CC) -o $@ $(MAIN) -L . -lft

%.o: %.c
	$(CC) -o $@ -c -I $(HEADERS) $(CFLAGS) $<

clean:
	/bin/rm -f $(OBJ)
	/bin/rm -f $(MAIN)

fclean: clean
	/bin/rm -f $(NAME)
	/bin/rm -f $(TEST)

re: fclean all
