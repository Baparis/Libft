# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: baparis <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/03 17:42:59 by baparis           #+#    #+#              #
#    Updated: 2016/11/07 18:24:59 by baparis          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= libtest

SRC=test.c  memset.c bzero.c memcpy.c ft_memmove.c ft_memchr.c \
	ft_memcmp.c ft_strlen.c ft_strdup.c ft_strcpy.c ft_strncpy.c \
	ft_strcat.c ft_strncat.c strlcat.c ft_strchr.c ft_strrchr.c \
	ft_strstr.c


SRCO= memset.o bzero.o memcpy.o ft_memmove.o ft_memchr.o \
	ft_memcmp.o ft_strlen.o ft_strdup.o ft_strcpy.o ft_strncpy.o \
	ft_strcat.o ft_strncat.o strlcat.o ft_strchr.o ft_strrchr.o \
	ft_strstr.o

FLAG= -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc -o $(NAME) $(FLAG) $(SRC)

clean:

fclean: clean
	rm -rf $(NAME)

re: fclean all
