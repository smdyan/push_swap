# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smdyan <smdyan@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/06 09:43:23 by smdyan            #+#    #+#              #
#    Updated: 2022/03/06 09:43:36 by smdyan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= push_swap

CFLAGS		= -Wall -Wextra -Werror

SRC			= main.c\
				validate.c\
				utils.c\
				cmd_p_s.c cmd_r.c cmd_rr.c\
				quick_sort.c\
				separate.c\
				init.c\
				sort.c\
				global_sort.c\
				find_place.c

OBJ			= $(SRC:.c=.o)

INCLUDES	= ./includes

HEADER		= $(INCLUDES)/push_swap.h

LIBFT		= ./libft

all: $(NAME)

%.o: %.c
	gcc $(CFLAGS) -c $< -o $@ -I $(INCLUDES) -I $(LIBFT) -MD

include $(wildcard *.d)

$(NAME): $(OBJ) Makefile
	make all -C $(LIBFT)
	gcc -g $(OBJ) -o $@ -L $(LIBFT) -lft

clean:
	rm -f $(OBJ)
	rm -f $(wildcard *.d)
	make clean -C $(LIBFT)

fclean: clean
	rm -f $(NAME)
	make fclean -C $(LIBFT)

re: fclean all

.PHONY: all clean fclean re

