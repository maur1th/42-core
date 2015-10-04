# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/09/15 15:49:02 by tmaurin           #+#    #+#              #
#    Updated: 2015/09/15 15:49:03 by tmaurin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr
CC = gcc
CFLAGS = -Wall -Wextra -Werror

HEADERS = ./includes/
SRC = ./srcs/main.c ./srcs/eval.c ./srcs/helper.c ./srcs/util.c \
	./srcs/ft_atoi.c ./srcs/print.c

$(NAME):
	$(CC) $(CFLAGS) -I $(HEADERS) -o $(NAME) $(SRC)

all: $(NAME)

clean:
	/bin/rm -f $(NAME)

fclean: clean

re: clean all
