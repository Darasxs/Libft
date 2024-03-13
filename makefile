# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dpaluszk <dpaluszk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/05 09:10:47 by dpaluszk          #+#    #+#              #
#    Updated: 2024/03/13 11:18:23 by dpaluszk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

${NAME} : all

all: libft.a
SRC = ft_atoi.c \
      ft_bzero.c \
      ft_isalpha.c \
      ft_isalnum.c \
      ft_isascii.c \
      ft_isdigit.c \
      ft_isprint.c \
      ft_memchr.c \
      ft_memcmp.c \
      ft_memcpy.c \
      ft_memmove.c \
      ft_memset.c \
      ft_strchr.c \
      ft_strlcat.c \
      ft_strlcpy.c \
      ft_strlen.c \
      ft_strncmp.c \
      ft_strnstr.c \
      ft_strrchr.c \
      ft_tolower.c \
      ft_toupper.c \
      ft_calloc.c \
      ft_strdup.c \
      ft_substr.c \
      ft_strjoin.c \
      ft_strtrim.c \
      ft_split.c \
      ft_itoa.c \
      ft_strmapi.c \
      ft_striteri.c \
      ft_putchar_fd.c \
      ft_putstr_fd.c \
      ft_putendl_fd.c \
      ft_putnbr_fd.c

OBJECTS = $(SRC:.c=.o)

FLAGS = -Wall -Wextra -Werror

CC = cc

%.o: %.c libft.h
	${CC} ${FLAGS} -c $< -o $@

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

clean:
	rm -rf	${OBJECTS}

fclean:	clean
	rm -rf ${NAME}

re: fclean all