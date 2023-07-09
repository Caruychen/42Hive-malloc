# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cchen <cchen@student.hive.fi>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/09 10:57:29 by cchen             #+#    #+#              #
#    Updated: 2023/07/09 10:57:31 by cchen            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := test_malloc
CC := gcc
CFLAGS := -Wall -Wextra -Werror
INCLUDES = -I./includes -I$(MALLOC)/includes/
LIB = -L$(MALLOC) -lft-malloc

# **************************************************************************** #
# FILES
# **************************************************************************** #
MALLOC := ..
SRC_DIR := ./src
SRC := $(shell find $(SRC_DIR) -type f | grep -E "\.c$$")

OBJ_DIR := ./obj
OBJS := $(SRCS:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

# **************************************************************************** #
# COMMANDS
# **************************************************************************** #
.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ_DIR) $(OBJS)
	$(MAKE) -C $(MALLOC)
	$(CC) $(CFLAGS) $(LIB) $(OBJS) -o $@

$(OBJ_DIR):
	@mkdir -p $(@)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) -c $(CFLAGS) $(INCLUDES) -o $@ $<

clean:
	$(MALE) -C $(MALLOC) clean
	@rm -rf $(OBJ_DIR)

fclean:
	$(MALE) -C $(MALLOC) fclean
	@rm -rf $(NAME)

re: fclean $(NAME)
