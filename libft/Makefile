# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: russelenc <russelenc@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/11 17:31:29 by rencarna          #+#    #+#              #
#    Updated: 2023/04/26 11:38:20 by russelenc        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Makefile doit au minimum contenir les règles $(NAME), all, clean, fclean et re

NAME = libft.a

SRC = ft_atoi.c ft_calloc.c ft_isalpha.c ft_isdigit.c ft_itoa.c ft_memcmp.c \
	ft_memmove.c ft_putchar_fd.c ft_putnbr_fd.c ft_split.c ft_strdup.c ft_strjoin.c \
	ft_strlcpy.c ft_strmapi.c ft_strnstr.c ft_tolower.c ft_bzero.c \
	ft_isalnum.c ft_isascii.c ft_isprint.c ft_memchr.c ft_memcpy.c ft_memset.c \
	ft_putendl_fd.c ft_putstr_fd.c ft_strchr.c ft_striteri.c ft_strlcat.c ft_strlen.c \
	ft_strncmp.c ft_strrchr.c ft_substr.c ft_toupper.c ft_strtrim.c ft_strcmp.c

BONUS = ft_lstadd_back.c ft_lstnew.c ft_lstadd_front.c ft_lstnew.c ft_lstlast.c ft_lstsize.c \
	ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

CFLAGS =  -Wall -Werror -Wextra

CC = cc

CO = gcc

%.o : %.c 
	@$(CC) -o $@ -c $< $(CFLAGS)  

OBJ = $(SRC:.c=.o)

OBJ_BONUS = $(BONUS:.c=.o)

all: $(NAME)

$(NAME) : $(OBJ)
	@ar rcs $(NAME) $(OBJ)

bonus : $(OBJ) $(OBJ_BONUS) 
	ar rcs $(NAME) $(OBJ) $(OBJ_BONUS)

clean: 
	rm -f $(OBJ) $(OBJ_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
