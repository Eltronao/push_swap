# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lagonzal <lagonzal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/22 13:19:53 by lagonzal          #+#    #+#              #
#    Updated: 2022/12/23 18:49:33 by lagonzal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRCS = ft_check_input.c \
	   ft_num_format.c\
	   ft_push_swap.c\

OBJS = ft_check_input.o \
	   ft_num_format.o\
	   ft_push_swap.o\

LIB_DIR = libft

LIB = libft.a

INCLUDE = -I $(LIB_DIR)

CFLAGS = -Wall -Wextra -Werror

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
	$(MAKE) fclean -C $(LIB_DIR)
.PHONY: all clean fclean re