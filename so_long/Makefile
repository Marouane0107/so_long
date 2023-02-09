# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maouzal <maouzal@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/30 04:35:35 by maouzal           #+#    #+#              #
#    Updated: 2023/02/08 21:23:37 by maouzal          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC = so_long.c mevment.c read-map-arg_check.c check_map.c ft_split.c \
 put_images.c ./get_next_line/get_next_line_utils.c ./get_next_line/get_next_line.c \
 print_itoi.c flood_fill.c

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
		cc $(OBJ) -lmlx -framework OpenGL -framework AppKit -o $(NAME)
clean :
		rm -f $(OBJ)
fclean : clean
		rm -f $(NAME)
re : fclean all
