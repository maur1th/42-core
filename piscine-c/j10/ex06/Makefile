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

NAME = do-op
CC = gcc
CFLAGS = -Wall -Wextra -Werror

HEADERS = ./includes/
SRC = ./src/ft_atoi.c ./src/main.c ./src/operations.c ./src/util.c

$(NAME):
	$(CC) $(CFLAGS) -I $(HEADERS) -o $(NAME) $(SRC)

all: $(NAME)

clean:
	/bin/rm -f $(NAME)

fclean: clean

re: clean all
