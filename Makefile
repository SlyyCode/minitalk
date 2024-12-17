# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aletourn <aletourn@student.42nice.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/17 15:40:22 by aletourn          #+#    #+#              #
#    Updated: 2024/12/17 15:46:54 by aletourn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS_SERVER = $(wildcard src/server/*.c)
SRCS_CLIENT = $(wildcard src/client/*.c)

OBJS_SERVER = $(SRCS_SERVER:.c=.o)
OBJS_CLIENT = $(SRCS_CLIENT:.c=.o)

NAME_SERVER = server
NAME_CLIENT = client

LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a
INCLUDES = -I./includes

RED = \033[0;31m
GREEN = \033[0;32m
YELLOW = \033[0;33m
BLUE = \033[0;34m
RESET = \033[0m

all: $(NAME_SERVER) $(NAME_CLIENT)

$(NAME_SERVER): $(LIBFT) $(OBJS_SERVER)
	@echo "$(BLUE)Creating server $(NAME_SERVER)$(RESET)"
	@$(CC) $(CFLAGS) $(INCLUDES) $(OBJS_SERVER) $(LIBFT) -o $(NAME_SERVER)

$(NAME_CLIENT): $(LIBFT) $(OBJS_CLIENT)
	@echo "$(BLUE)Creating client $(NAME_CLIENT)$(RESET)"
	@$(CC) $(CFLAGS) $(INCLUDES) $(OBJS_CLIENT) $(LIBFT) -o $(NAME_CLIENT)

$(LIBFT): 
	@echo "$(BLUE)Compiling libft...$(RESET)"
	@$(MAKE) -C $(LIBFT_DIR)

src/server/%.o: src/server/%.c
	@echo "$(YELLOW)Compiling $< (server)$(RESET)"
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

src/client/%.o: src/client/%.c
	@echo "$(YELLOW)Compiling $< (client)$(RESET)"
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean_server:
	@echo "$(RED)Removing server object files$(RESET)"
	@rm -f $(OBJS_SERVER)

clean_client:
	@echo "$(RED)Removing client object files$(RESET)"
	@rm -f $(OBJS_CLIENT)

clean: clean_server clean_client
	@echo "$(RED)Removing object files$(RESET)"

fclean: clean
	@echo "$(RED)Removing $(NAME_SERVER) and $(NAME_CLIENT)$(RESET)"
	@rm -f $(NAME_SERVER) $(NAME_CLIENT)
	@$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all
	@echo "$(GREEN)Rebuild completed$(RESET)"

.PHONY: all clean fclean re clean_server clean_client
