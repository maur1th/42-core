# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmaurin <tmaurin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/09/21 10:13:22 by tmaurin           #+#    #+#              #
#    Updated: 2015/09/22 12:09:24 by tbouder          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= bsq
CC 			= gcc
CFLAGS		= -Wall -Wextra -Werror

HEADERS 	= ./includes/
SRC			= ./srcs/main.c \
			  ./srcs/get_stream.c \
			  ./srcs/ft_strdup.c \
			  ./srcs/ft_atoi.c \
			  ./srcs/print.c \
			  ./srcs/util.c \
			  ./srcs/check_input.c \
			  ./srcs/check_helper.c \
			  ./srcs/launcher.c \
			  ./srcs/store_obs.c \
			  ./srcs/check_sqr.c \
			  ./srcs/print_grid.c

$(NAME):
	$(CC) $(CFLAGS) -I $(HEADERS) -o $(NAME) $(SRC)

all: $(NAME)

clean:
	/bin/rm -f $(NAME)

fclean: clean

re: clean all
