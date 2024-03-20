# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dpaluszk <dpaluszk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/05 09:10:47 by dpaluszk          #+#    #+#              #
#    Updated: 2024/03/19 19:40:21 by dpaluszk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

all: ${NAME}

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

BONUS = ft_lstnew_bonus.c \
      ft_lstadd_front_bonus.c \
      ft_lstsize_bonus.c \
      ft_lstlast_bonus.c \
      ft_lstadd_back_bonus.c \
      ft_lstdelone_bonus.c \
      ft_lstclear_bonus.c \
      ft_lstiter_bonus.c \
      ft_lstmap_bonus.c


OBJECTS = $(SRC:.c=.o)

BONUS_OBJECTS = $(BONUS:.c=.o)

FLAGS = -Wall -Wextra -Werror

CC = cc

%.o: %.c libft.h
	${CC} ${FLAGS} -c $< -o $@

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

clean:
	rm -rf ${OBJECTS}

fclean:	clean
	rm -rf ${NAME} ${BONUS_OBJECTS}

re: fclean all

bonus: $(BONUS_OBJECTS) $(OBJECTS)
	ar rcs $(NAME) $(BONUS_OBJECTS) $(OBJECTS)

.PHONY: all clean fclean re bonus