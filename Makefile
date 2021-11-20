# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ekeen-wy <ekeen-wy@student.42kl.edu.my>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/15 10:06:07 by ekeen-wy          #+#    #+#              #
#    Updated: 2021/11/20 20:07:06 by ekeen-wy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a 

cc = gcc

CFLAGS = -Wall -Wextra -Werror

DEPS = libft.h

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c \
	  ft_toupper.c ft_tolower.c ft_strlcpy.c ft_strlcat.c ft_strncmp.c ft_atoi.c \
	  ft_memset.c ft_memcpy.c ft_memmove.c ft_memcmp.c ft_memchr.c ft_bzero.c \
	  ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strdup.c ft_calloc.c ft_substr.c \
	  ft_strjoin.c ft_strtrim.c	ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
	  ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
	  
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar csr $(NAME) $(OBJ)

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
	gcc -nostartfiles -shared -o libft.so $(OBJ)

fclean: clean 
	rm -f $(NAME)

clean:
	rm -f $(OBJ)

re: fclean all

.PHONY: all clean fclean re 
