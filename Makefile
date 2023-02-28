# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lagonzal <larraingonzalez@gmail.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/22 13:19:53 by lagonzal          #+#    #+#              #
#    Updated: 2023/02/28 23:25:39 by lagonzal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRCS = 00_main.c\
		01_check_input.c\
		02_is_ordered.c\
		03_num_format.c\
		04_top_order.c\
		05_order_small.c\
		06_order_mid.c\
		moves_push.c\
		moves_reverse_rotate.c\
		moves_rotate.c\
		moves_swap.c\
		u_extraction.c\
		u_find_in_chunk.c\
		u_make_free.c\
		u_print_lst.c


OBJS = 00_main.o\
		01_check_input.o\
		02_is_ordered.o\
		03_num_format.o\
		04_top_order.o\
		05_order_small.o\
		06_order_mid.o\
		moves_push.o\
		moves_reverse_rotate.o\
		moves_rotate.o\
		moves_swap.o\
		u_extraction.o\
		u_find_in_chunk.o\
		u_make_free.o\
		u_print_lst.o

LIB_DIR = libft

LIB = libft.a

INCLUDE = -I $(LIB_DIR)

CFLAGS = -Wall -Wextra -Werror -fsanitize=address -g3

RM = rm

CC = gcc

all: $(NAME)

%o:%c
	$(CC) $(CFLAGS) -c $(SRCS)

$(LIB):
	$(MAKE) -C $(LIB_DIR)

$(NAME): $(OBJS) $(LIB)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME) $(INCLUDE) $(LIB_DIR)/$(LIB)

clean:
	$(RM) $(OBJS)
	$(MAKE) clean -C $(LIB_DIR)

fclean: clean
	$(RM) $(NAME)
	$(MAKE) fclean -C $(LIB_DIR)

re: fclean all

.PHONY: all clean fclean re