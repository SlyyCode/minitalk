# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aletourn <aletourn@student.42nice.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/20 09:40:22 by aletourn          #+#    #+#              #
#    Updated: 2024/11/20 09:46:54 by aletourn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS_IS = $(wildcard src/ft_is/*.c)
SRCS_LST = $(wildcard src/ft_lst/*.c)
SRCS_MEM = $(wildcard src/ft_mem/*.c)
SRCS_PUT = $(wildcard src/ft_put/*.c)
SRCS_STR = $(wildcard src/ft_str/*.c)
SRCS_UTILS = $(wildcard src/ft_utils/*.c)
SRCS_GNL = $(wildcard src/get_next_line/*.c)
SRCS_PRINTF = $(wildcard src/ft_printf/*.c)

SRCS = $(SRCS_IS) $(SRCS_LST) $(SRCS_MEM) $(SRCS_PUT) $(SRCS_STR) $(SRCS_UTILS) $(SRCS_GNL) $(SRCS_PRINTF)
OBJS = $(SRCS:.c=.o)
NAME = libft.a
INCLUDES = -I./includes

RED = \033[0;31m
GREEN = \033[0;32m
YELLOW = \033[0;33m
BLUE = \033[0;34m
RESET = \033[0m

all: $(NAME)
	@echo "$(GREEN)Compilation of library $(NAME) completed$(RESET)"

$(NAME): $(OBJS)
	@echo "$(BLUE)Creating library $(NAME)$(RESET)"
	@ar rcs $(NAME) $(OBJS)

%.o: %.c
	@echo "$(YELLOW)Compiling $<$(RESET)"
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	@echo "$(RED)Removing object files$(RESET)"
	@rm -f $(OBJS)

fclean: clean
	@echo "$(RED)Removing library $(NAME)$(RESET)"
	@rm -f $(NAME)

re: fclean all
	@echo "$(GREEN)Rebuild completed$(RESET)"

.PHONY: all clean fclean re

