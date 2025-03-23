# Makefile

NAME = test
SRC = ./main.c ../ex00/ft_strcmp.c ../ex01/ft_strncmp.c ../ex02/ft_strcat.c ../ex03/ft_strncat.c ../ex04/ft_strstr.c ../ex05/ft_strlcat.c
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
