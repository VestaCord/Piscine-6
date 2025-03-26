# Makefile

NAME = test
SRC = ./main.c ../ex01/ft_putstr.c ../ex02/ft_putnbr.c ../ex03/ft_atoi.c ../ex05/ft_atoi_base.c
OBJ = $(SRC:.c=.o) 

# Implicit Compilation
CC = gcc
CFLAGS = -Wall -Wextra -Werror 

default: all clean

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
