NAME	= libft.a
SRCS	= ./ft_isalpha.c ./ft_isdigit.c ./ft_isalnum.c ./ft_isascii.c
OBJS	= ${SRCS:.c=.o}
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -f
HEADER	= ./libft.h

.c.o:
			${CC} ${CFLAGS} -c -include ${HEADER} $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			ar rc ${NAME} ${OBJS}

all:	${NAME}

clean:
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all

.PHONY: all clean fclean re