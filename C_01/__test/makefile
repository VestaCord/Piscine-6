# Makefile

NAME = test
SRC = ./main.c ../ex00/ft_ft.c ../ex01/ft_ultimate_ft.c ../ex02/ft_swap.c ../ex03/ft_div_mod.c ../ex04/ft_ultimate_div_mod.c ../ex05/ft_putstr.c
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
