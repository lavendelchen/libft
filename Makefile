# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shaas <shaas@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/25 11:26:14 by shaas             #+#    #+#              #
#    Updated: 2021/06/25 16:38:18 by shaas            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

COMP = gcc -Wall -Wextra -Werror -c

C_FILES = $(wildcard *.c)
#ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
#ft_isprint.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
#ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c \
#ft_tolower.c ft_toupper.c

O_FILES = $(C_FILES:.c=.o)


all: $(NAME)

comp:              // need to change my makefile so that war machin works (i guess)
	$(COMP)

$(NAME): comp
	ar rc $(NAME) $(O_FILES)

clean:
	rm $(O_FILES)

fclean: clean
	rm $(NAME)

re: fclean all

#CC = gcc
#CFLAGS = -Wall -Wextra -Werror -c
#
#INCLUDES = libft.h
#
#NAME = libft.a
#SOURCES = $(wildcard *.c)
#OBJECTS = $(SOURCES:.c=.o)
#
#all: $(NAME)
#
#bonus: all
#
#%.o: %.c
#	$(CC) $(CFLAGS) $< -o $@ -I $(INCLUDES)
#
#$(NAME): $(OBJECTS)
#	ar cr $@ $(OBJECTS)
#
#clean:
#	rm -f $(OBJECTS)
#
#fclean: clean
#	rm -f $(NAME)
#
#re: fclean all
