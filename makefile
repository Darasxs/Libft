# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dpaluszk <dpaluszk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/05 09:10:47 by dpaluszk          #+#    #+#              #
#    Updated: 2024/03/08 15:16:49 by dpaluszk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


BINARY = libft.a

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c

OBJECTS = $(SRC:.c=.o)

FLAGS = -Wall -Wextra -Werror

CC = cc

all: $(BINARY)

%.o: %.c
	${CC} ${FLAGS} -c $< -o $@

$(BINARY): $(OBJECTS)
	ar rcs $(BINARY) $(OBJECTS)

clean:
	rm -rf	${OBJECTS}

fclean:	clean
	rm -rf ${BINARY}

