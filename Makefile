# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lagonzal <larraingonzalez@gmail.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/22 13:19:53 by lagonzal          #+#    #+#              #
#    Updated: 2023/02/25 12:58:53 by lagonzal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRCS = ft_check_input.c \
	   ft_num_format.c \
	   00_main.c \
	   ft_top_order.c \
	   ft_order_small.c \
	   ft_order_mid.c \
	   ft_insert.c \
	   ft_push.c \
	   ft_reverse_rotate_both.c \
	   ft_reverse_rotate.c \
	   ft_rotate_both.c \
	   ft_rotate.c \
	   ft_swap_both.c \
	   ft_swap.c \
	   ft_make_list.c \
	   ft_print_lst.c

OBJS = ft_check_input.o \
	   ft_num_format.o \
	   00_main.o \
	   ft_top_order.o \
	   ft_order_small.o \
	   ft_order_mid.o \
	   ft_insert.o \
	   ft_push.o \
	   ft_reverse_rotate_both.o \
	   ft_reverse_rotate.o \
	   ft_rotate_both.o \
	   ft_rotate.o \
	   ft_swap_both.o \
	   ft_swap.o \
	   ft_make_list.o \
	   ft_print_lst.o

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