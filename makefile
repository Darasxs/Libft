# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dpaluszk <dpaluszk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/05 09:10:47 by dpaluszk          #+#    #+#              #
#    Updated: 2024/03/05 09:39:14 by dpaluszk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a

SRC = ft_isalpha.c

OBJECTS = ${SRC:.c=.o}

FLAGS = -Wall -Wextra -Werror

CC = cc

INCLUDES = ./

${NAME}: ${OBJECTS}
	ar rc ${NAME} ${OBJECTS}
	ranlib ${NAME}

.c.o:
	${CC} ${FLAGS} -c $< -o ${<:.c=.o} -I ${INCLUDES}

all: ${NAME}

clean: 
	rm -rf ${OBJECTS}

fclean: clean
	rm ${NAME}

re: fclean all