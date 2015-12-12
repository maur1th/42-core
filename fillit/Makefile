# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tm <tm@student.42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/28 14:40:16 by tmaurin           #+#    #+#              #
#    Updated: 2015/12/12 16:31:58 by tm               ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= fillit
CC 			= gcc
CFLAGS		= -Wall -Wextra -Werror

HEADERS 	= ./includes/
SRC			= ./srcs/main.c \
			  ./srcs/strdoublesplit.c \
			  ./srcs/matrixshift.c
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
