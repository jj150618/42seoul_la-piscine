CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -f

SRCS_DIR	= ./srcs/
SRCS_NAME	= ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
SRCS	= ${addprefix ${SRCS_DIR}, ${SRCS_NAME}}

OBJS	= ${SRCS:.c=.o}

NAME	= libft.a

INC_DIR	= ./includes/

.c.o:
			${CC} ${CFLAGS} -I ${INC_DIR} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			ar rc ${NAME} ${OBJS}

all: 		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all
