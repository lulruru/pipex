# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rencarna <rencarna@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/20 13:02:30 by russelenc         #+#    #+#              #
#    Updated: 2023/05/02 13:56:58 by rencarna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

RED		= \033[0;31m
GREEN	= \033[0;32m
YELLOW	= \033[0;33m
BLUE	= \033[0;34m
VIOLET	= \033[0;35m
CYAN	= \033[0;36m
WHITE	= \033[0;37m

#NAME
NAME = pipex
CHECK_NAME = checker

#DIR
SRC_DIR = src
LIBFT_DIR = libft

#src
SRC = main.c utils.c\

LIBFT = libft/libft.a

#obj
SRCCO = $(SRCS:.c=.o)
CHECK_CO = $(CHECK_SRCS:.c=.o)

 #srcs
SRCS = $(addprefix $(SRC_DIR)/,$(SRC))
CHECK_SRCS = $(addprefix $(SRC_DIR)/, $(CHECK_SRC))

 #compil
CFLAGS =  -Wall -Werror -Wextra
CC = cc
GCC = gcc -Wall -Werror -Wextra -g3


all: $(NAME)


$(NAME) : $(SRCCO)
	make -C libft
	@$(GCC) $(SRCCO) $(LIBFT) -o $@

%.o : %.c
	@$(GCC) -c $< -o $@

clean:
	rm -f $(SRCCO)
	rm -f $(CHECK_CO)
	make clean -C libft

fclean: clean
	rm -f $(NAME)
	rm -f $(CHECK_NAME)
	make fclean -C libft

re: fclean all

.PHONY: all clean fclean re