CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -f

SRCS_DIR	= ./srcs/
SRCS_NAME	= ft_putnbr.c ft_atoi.c do_op.c main.c
SRCS	= ${addprefix ${SRCS_DIR}, ${SRCS_NAME}}

OBJS	= ${SRCS:.c=.o}

NAME	= do-op

INC_DIR	= ./includes/

.c.o:
			${CC} ${CFLAGS} -I ${INC_DIR} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${CC} -o ${NAME} ${OBJS}

all: 		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all
