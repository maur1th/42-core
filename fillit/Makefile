# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tm <tm@student.42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/28 14:40:16 by tmaurin           #+#    #+#              #
#    Updated: 2016/01/29 19:01:29 by tm               ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= fillit
CC 			= gcc
CFLAGS		= -Wall -Wextra -Werror

HEADERS 	= ./includes/
SRC			= ./srcs/main.c \
			  ./srcs/check_file.c \
			  ./srcs/init_helper.c \
			  ./srcs/make_tetriminos.c \
			  ./srcs/trim_tetriminos.c \
			  ./srcs/trim_tetrimino.c \
			  ./srcs/del_tetrimino.c \
			  ./srcs/check_tetriminos.c \
			  ./srcs/solver.c \
			  ./srcs/solver_helper.c
OBJ			= $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	make -C libft/
	$(CC) -o $@ $^ -L libft/ -lft

%.o: %.c
	$(CC) -o $@ -c -I $(HEADERS) $(CFLAGS) $<

clean:
	make clean -C libft/
	/bin/rm -f $(OBJ)

fclean: clean
	make fclean -C libft/
	/bin/rm -f $(NAME)

re: fclean all
