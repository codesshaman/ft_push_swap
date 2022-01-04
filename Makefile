# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/27 13:47:11 by jleslee           #+#    #+#              #
#    Updated: 2022/01/03 16:33:35 by jleslee          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			:=	push_swap

DIRECTORY			:=	./
OBJECTS			:=	./bin
LIBFT			:=	./libft

SRCS			:=	functions/pa.c functions/pb.c functions/ra.c functions/rb.c functions/rr.c \
	functions/rra.c functions/rrb.c functions/rrr.c functions/sa.c functions/sb.c functions/ss.c \
	all_sorts.c index_processing.c stack_processing.c checker.c parser.c lists_processing.c push_swap.c

OBJS			:=	$(addprefix ${OBJECTS}/, $(SRCS:.c=.o))

CC				:=	gcc
CFLAGS			:=	-Wall -Wextra -Werror
LIBRARY			:=	-L${LIBFT} -lft

${OBJECTS}/%.o: ${DIRECTORY}/%.c
	mkdir -p $(dir $@)
	${CC} ${CFLAGS} -o $@ -c $<

all: ${NAME}

${NAME}: ${OBJS}
	make -C ${LIBFT}
	${CC} ${CFLAGS} -o ${NAME} ${OBJS} ${LIBRARY}

clean:
	make -C ${LIBFT} clean
	rm -rf ${OBJECTS}

fclean: clean
	make -C ${LIBFT} fclean
	rm -f ${NAME}

re: fclean all

.PHONY:	all clean fclean re
