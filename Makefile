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

SRCS_SERVER = src/server/server.c
SRCS_CLIENT = src/client/client.c
SRCS_SERVER_BONUS = src/server/server_bonus.c
SRCS_CLIENT_BONUS = src/client/client_bonus.c

OBJS_SERVER = $(SRCS_SERVER:.c=.o)
OBJS_CLIENT = $(SRCS_CLIENT:.c=.o)

OBJS_SERVER_BONUS = src/server/server_bonus.o
OBJS_CLIENT_BONUS = src/client/client_bonus.o

NAME_SERVER = server
NAME_CLIENT = client
NAME_SERVER_BONUS = server_bonus
NAME_CLIENT_BONUS = client_bonus

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

bonus: $(NAME_SERVER_BONUS) $(NAME_CLIENT_BONUS)

$(NAME_SERVER_BONUS): $(LIBFT) $(OBJS_SERVER_BONUS)
	@echo "$(BLUE)Creating server with bonus $(NAME_SERVER_BONUS)$(RESET)"
	@$(CC) $(CFLAGS) $(INCLUDES) $(OBJS_SERVER_BONUS) $(LIBFT) -o $(NAME_SERVER_BONUS)

$(NAME_CLIENT_BONUS): $(LIBFT) $(OBJS_CLIENT_BONUS)
	@echo "$(BLUE)Creating client with bonus $(NAME_CLIENT_BONUS)$(RESET)"
	@$(CC) $(CFLAGS) $(INCLUDES) $(OBJS_CLIENT_BONUS) $(LIBFT) -o $(NAME_CLIENT_BONUS)

$(LIBFT): 
	@echo "$(BLUE)Compiling libft...$(RESET)"
	@$(MAKE) -C $(LIBFT_DIR)

src/server/%.o: src/server/%.c
	@echo "$(YELLOW)Compiling $< (server)$(RESET)"
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

src/client/%.o: src/client/%.c
	@echo "$(YELLOW)Compiling $< (client)$(RESET)"
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

src/server/server_bonus.o: src/server/server_bonus.c
	@echo "$(YELLOW)Compiling $< (server bonus)$(RESET)"
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

src/client/client_bonus.o: src/client/client_bonus.c
	@echo "$(YELLOW)Compiling $< (client bonus)$(RESET)"
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean_server:
	@echo "$(RED)Removing server object files$(RESET)"
	@rm -f $(OBJS_SERVER) $(OBJS_SERVER_BONUS)

clean_client:
	@echo "$(RED)Removing client object files$(RESET)"
	@rm -f $(OBJS_CLIENT) $(OBJS_CLIENT_BONUS)

clean: clean_server clean_client
	@echo "$(RED)Removing object files$(RESET)"

fclean: clean
	@echo "$(RED)Removing $(NAME_SERVER) and $(NAME_CLIENT)$(RESET)"
	@rm -f $(NAME_SERVER) $(NAME_CLIENT) $(NAME_SERVER_BONUS) $(NAME_CLIENT_BONUS)
	@$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all
	@echo "$(GREEN)Rebuild completed$(RESET)"

.PHONY: all clean fclean re clean_server clean_client bonus


