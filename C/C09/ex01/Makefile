
TARGET = libft.a
SRCS = srcs/ft_putchar.c\
		srcs/ft_swap.c\
		srcs/ft_putstr.c\
		srcs/ft_strlen.c\
		srcs/ft_strcmp.c

OBJS = ${SRCS:.c=.o}

CC = gcc
RM = rm -f
CFLAGS = -Wall -Werror -Wextra

.c.o:
		${CC} ${CFLAGS} -I includes -c $< -o ${<:.c=.o}

$(TARGET): ${OBJS}
			ar rcs ${TARGET} ${OBJS}

all: ${TARGET}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${TARGET}

re:			fclean all
