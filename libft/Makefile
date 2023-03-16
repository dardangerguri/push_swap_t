# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dgerguri <dgerguri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/30 14:08:35 by dgerguri          #+#    #+#              #
#    Updated: 2023/02/10 16:19:55 by dgerguri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ./srcs/ft_isalpha.c ./srcs/ft_isdigit.c ./srcs/ft_isalnum.c ./srcs/ft_isascii.c\
./srcs/ft_isprint.c ./srcs/ft_strlen.c ./srcs/ft_memset.c ./srcs/ft_bzero.c ./srcs/ft_memcpy.c\
./srcs/ft_memmove.c ./srcs/ft_strlcpy.c ./srcs/ft_strlcat.c ./srcs/ft_toupper.c ./srcs/ft_tolower.c\
./srcs/ft_strchr.c ./srcs/ft_strrchr.c ./srcs/ft_strncmp.c ./srcs/ft_memchr.c ./srcs/ft_memcmp.c ./srcs/ft_strnstr.c\
./srcs/ft_atoi.c ./srcs/ft_calloc.c ./srcs/ft_strdup.c ./srcs/ft_substr.c ./srcs/ft_strjoin.c ./srcs/ft_strtrim.c\
./srcs/ft_split.c ./srcs/ft_itoa.c ./srcs/ft_strmapi.c ./srcs/ft_striteri.c ./srcs/ft_putchar_fd.c ./srcs/ft_putstr_fd.c\
./srcs/ft_putendl_fd.c ./srcs/ft_putnbr_fd.c ./srcs/get_next_line.c ./srcs/ft_lstnew.c \
./srcs/ft_lstadd_front.c ./srcs/ft_lstsize.c ./srcs/ft_lstlast.c \
./srcs/ft_lstadd_back.c ./srcs/ft_lstdelone.c ./srcs/ft_lstclear.c \
./srcs/ft_lstiter.c ./srcs/ft_lstmap.c ./srcs/ft_strcmp.c \
./srcs/ft_printf/ft_printf.c ./srcs/ft_printf/hexadecimal_printf.c ./srcs/ft_printf/unsigned_decimal_printf.c

OBJ = ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o\
ft_isprint.o ft_strlen.o ft_memset.o ft_bzero.o ft_memcpy.o\
ft_memmove.o ft_strlcpy.o ft_strlcat.o ft_toupper.o ft_tolower.o\
ft_strchr.o ft_strrchr.o ft_strncmp.o ft_memchr.o ft_memcmp.o ft_strnstr.o\
ft_atoi.o ft_calloc.o ft_strdup.o ft_substr.o ft_strjoin.o  ft_strtrim.o\
ft_split.o ft_itoa.o ft_strmapi.o ft_striteri.o ft_putchar_fd.o ft_putstr_fd.o\
ft_putendl_fd.o ft_putnbr_fd.o get_next_line.o ft_lstnew.o \
ft_lstadd_front.o ft_lstsize.o ft_lstlast.o \
ft_lstadd_back.o ft_lstdelone.o ft_lstclear.o \
ft_lstiter.o ft_lstmap.o ft_strcmp.o \
ft_printf.o hexadecimal_printf.o unsigned_decimal_printf.o

INCLUDE = ./includes/

CC = gcc
FLAGS = -Wall -Wextra -Werror


GREEN = \033[0;32m
RESET = \033[0m

all: $(NAME)

$(NAME):
	@echo "$(GREEN)Compiling Library!"
	@$(CC) $(FLAGS) -c $(SRC) -I $(INCLUDE)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

clean:
	@echo "$(GREEN)Removing Object Files!"
	@rm -f $(OBJ)

fclean: clean
	@echo "$(GREEN)Removing Library!"
	@rm -f $(NAME)

re:fclean all

.PHONY: all clean fclean re
