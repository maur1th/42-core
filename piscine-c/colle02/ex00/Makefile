# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/09/19 11:19:09 by tmaurin           #+#    #+#              #
#    Updated: 2015/09/20 21:12:34 by tdefresn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle-2
CC = gcc
CFLAGS = -Wall -Wextra -Werror

HEADERS = ./includes/
SRC = ./srcs/main.c ./srcs/colle_00_00.c ./srcs/colle_00_01.c \
	  ./srcs/colle_00_02.c ./srcs/colle_00_03.c ./srcs/colle_00_04.c \
	  ./srcs/colle_01.c ./srcs/print.c ./srcs/get_pipe_data.c \
	  ./srcs/ft_strdup.c

$(NAME):
	$(CC) $(CFLAGS) -I $(HEADERS) -o $(NAME) $(SRC)

all: $(NAME)

clean:
	/bin/rm -f $(NAME)

fclean: clean

re: clean all
