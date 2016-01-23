# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tm <tm@student.42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/28 14:40:16 by tmaurin           #+#    #+#              #
#    Updated: 2016/01/23 06:38:29 by tm               ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= fillit
CC 			= gcc
CFLAGS		= -Wall -Wextra -Werror

HEADERS 	= ./includes/
SRC			= ./srcs/main.c \
			  ./srcs/matrixshift.c \
			  ./srcs/check_file.c \
			  ./srcs/make_tetriminos.c \
			  ./srcs/trim_tetrimino.c \
			  ./srcs/check_tetriminos.c \
			  ./srcs/print_tetriminos.c
OBJ			= $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	make -C libft/
	$(CC) -o $@ $^ -L libft/ -lft

%.o: %.c
	$(CC) -o $@ -c -I $(HEADERS) $(CFLAGS) $<

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
