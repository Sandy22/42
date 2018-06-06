# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smadnaik <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/29 18:37:09 by smadnaik          #+#    #+#              #
#    Updated: 2018/05/28 06:30:55 by smadnaik         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRC = main.c\
	  read.c\
	  solve.c\
	  arrange.c\
	  tetriminos.c\
	  check.c\
	  usage.c\
	  shape.c

OBJ = $(SRC:.c=.o)

SRC_PATH = src/

SRC_POS = $(addprefix $(SRC_PATH),$(SRC))

LIBFT =	lib/libft/libft.a

CC = gcc

FLAGS = -Wall -Wextra -Werror
FLAGS += -I includes/

all: $(NAME)

$(NAME): $(LIBFT) $(OBJ)
		$(CC) $(FLAGS) $(OBJ) -o $(NAME) $(LIBFT)

$(OBJ): $(LIBFT)
		$(CC) $(FLAGS) -c $(SRC_POS) 

$(LIBFT):
		make -C ./lib/libft/

clean:
		rm -f $(OBJ)
		make clean -C ./lib/libft/

fclean: clean
		rm -f $(NAME)
		make fclean -C ./lib/libft/

re: fclean all

.PHONY : all, re, clean, flcean
