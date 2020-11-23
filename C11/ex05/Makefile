# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adlancel <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/24 17:53:48 by adlancel          #+#    #+#              #
#    Updated: 2020/08/26 16:28:25 by adlancel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME	= do-op 
SRCS	= ft_fonction.c ft_op.c main.c
OBJS	= ${SRCS:.c=.o}
HEADER  = -I ./
FOLDER 	= srcs

CC		= gcc
CFLAGS  = -Wall -Wextra -Werror
RM		= rm -rf

${NAME}:	
			${CC} ${CFLAGS} -c ${SRCS} ${HEADER}
			${CC} ${CFLAGS} -o ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} do-op

re:			fclean all
