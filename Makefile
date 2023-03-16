# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dgerguri <dgerguri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/10 16:24:12 by dgerguri          #+#    #+#              #
#    Updated: 2023/03/15 17:38:41 by dgerguri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = cc
FLAGS = -Wall -Wextra -Werror

LIBFT_D = ./libft
LIBFT = ./libft/libft.a

INCLUDE = ./includes/

SRC = ./srcs/main.c ./srcs/arguments.c ./srcs/error.c ./srcs/stack.c ./srcs/indexing.c ./srcs/swapping.c ./srcs/pushing.c ./srcs/rotating.c ./srcs/reversing.c ./srcs/sorting_three.c ./srcs/sorting.c ./srcs/stack_utils.c

OBJ = main.o arguments.o error.o stack.o indexing.o swapping.o pushing.o rotating.o reversing.o sorting_three.o sorting.o stack_utils.o


GREEN = \033[0;32m
RESET = \033[0m

all: $(NAME)

$(NAME):
	@echo "$(GREEN)Compiling push_swap project!"
	@$(MAKE) -C $(LIBFT_D)
	@cp $(LIBFT) ./$(NAME)
	@$(CC) $(FLAGS) $(SRC) -o $(NAME) -L$(LIBFT_D) -lft -g

clean:
	@echo "$(GREEN)Removing object files!"
	@$(MAKE) clean -C $(LIBFT_D)
	@$(RM) $(OBJ)

fclean: clean
	@echo "$(GREEN)Remove!"
	@$(MAKE) fclean -C $(LIBFT_D)
	@$(RM) $(NAME)

re:fclean all

.PHONY: all clean fclean re
