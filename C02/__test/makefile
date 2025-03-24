# Makefile

NAME = test
SRC = ./main.c ../ex00/ft_strcpy.c ../ex01/ft_strncpy.c ../ex02/ft_str_is_alpha.c ../ex03/ft_str_is_numeric.c ../ex09/ft_strcapitalize.c ../ex10/ft_strlcpy.c ../ex11/ft_putstr_non_printable.c ../ex12/ft_print_memory.c
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
