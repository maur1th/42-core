# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/09/15 11:16:39 by tmaurin           #+#    #+#              #
#    Updated: 2015/09/16 20:51:46 by tmaurin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror

HEADERS = ./includes/
SRC = 	./srcs/*.c

$(NAME):
	$(CC) $(CFLAGS) -I $(HEADERS) -c $(SRC)
	ar rc libft.a *.o
	ranlib libft.a

all: $(NAME)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
