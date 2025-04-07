
NAME	= libft.a
SRCS	= srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror -I includes

# substituition syntax $(VARIABLE:OLD_PREFIX%OLD_SUFFIX=NEW_PREFIX%NEW_SUFFIX)
# this implicitly compiles as below:
# %.o: %.c: # can also be written .c.o, but partially deprecated
# 	${CC} ${CFLAGS} -c $< -o $@ # here, $@ is also ${<:.c=.o}
OBJS	= ${SRCS:.c=.o}

# make == make all == make ${NAME} == make libft.a
all: ${NAME}

# s is to archive object files
$(NAME): ${OBJS}
	ar -rcs ${NAME} ${OBJS}

re: fclean all

fclean: clean
	rm -f ${NAME}

clean:
	rm -f ${OBJS}

# dont actually need this because we dont have files of these names
.PHONY: all clean fclean re