# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shaas <shaas@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/25 11:26:14 by shaas             #+#    #+#              #
#    Updated: 2021/07/14 20:28:01 by shaas            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

COMP = gcc -Wall -Wextra -Werror -c

C_FILES = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c \
ft_tolower.c ft_toupper.c ft_calloc.c ft_strdup.c ft_strjoin.c ft_substr.c ft_strtrim.c \
ft_itoa.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
ft_strmapi.c ft_split.c ft_striteri.c ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

O_FILES = $(C_FILES:.c=.o)

# rules #
all: $(NAME)

%.o: %.c
	@$(COMP) $< -o $@

$(NAME): $(O_FILES)
	@printf $(LIGHTBLUE)"*--------libtft compiled!--------------*\n\n"$(RESET)
	@ar rc $(NAME) $(O_FILES)
	@printf $(LIGHTBLUE)"*--------library created!--------------*\n\n"$(RESET)

clean:
	@rm -f $(O_FILES)
	@printf $(LIGHTBLUE)"*--------libft object files removed!---*\n\n"$(RESET)

fclean: clean
	@rm -f $(NAME)
	@printf $(LIGHTBLUE)"*--------$(NAME) removed!--------------*\n\n"$(RESET)

re: fclean all

# text modifiers #
RED = "\e[31m"

GREEN = "\e[32m"

YELLOW = "\e[33m"

BLUE = "\e[34m"

MAGENTA = "\e[35m"

CYAN = "\e[36m"

LIGHTGRAY = "\e[37m"

DARKGRAY = "\e[90m"

LIGHTRED = "\e[91m"

LIGHTGREEN = "\e[92m"

LIGHTYELLOW = "\e[93m"

LIGHTBLUE = "\e[94m"

LIGHTMAGENTA = "\e[95m"

LIGHTCYAN = "\e[96m"

RED_BG = "\e[41m"

GREEN_BG = "\e[42m"

YELLOW_BG = "\e[43m"

BLUE_BG = "\e[44m"

MAGENTA_BG = "\e[45m"

CYAN_BG = "\e[46m"

LIGHTGRAY_BG = "\e[47m"

DARKGRAY_BG = "\e[100m"

LIGHTRED_BG = "\e[101m"

LIGHTGREEN_BG = "\e[102m"

LIGHTYELLOW_BG = "\e[103m"

LIGHTBLUE_BG = "\e[104m"

LIGHTMAGENTA_BG = "\e[105m"

LIGHTCYAN_BG = "\e[106m"

BOLD = "\e[1m"

ITALIC = "\e[3m"

UNDERLINED = "\e[4m"

RESET = "\e[0m"
