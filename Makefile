NAME =		backtracking

SRCS_DIR =	srcs/

GNL_DIR =	GNL/

SRCS =		${SRCS_DIR}backtracking.c \
			${SRCS_DIR}create.c \
			${SRCS_DIR}free.c \
			${SRCS_DIR}init.c \
			${SRCS_DIR}print.c \
			${SRCS_DIR}utils.c \
			${GNL_DIR}get_next_line.c \
			${GNL_DIR}get_next_line_utils.c \
			main.c

OBJS =		${SRCS:.c=.o}

_DEPS =		philo.h

INCL =		./includes/

DEPS =		$(patsubst %,$(INCL)/%,$(_DEPS))

CC = 		gcc

CFLAGS =	-Wall -Werror -Wextra -g3

RM =		rm -rf

.c.o:	DEPS
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
		${CC} ${CFLAGS} ${OBJS} -o ${NAME}

all:	${NAME}

clean:
		${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re:		fclean
		$(MAKE) all


.PHONY: clean fclean re all