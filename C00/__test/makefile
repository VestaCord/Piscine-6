NAME = test

CC = clang
CFLAGS = -Wall -Wextra -Werror

SRCS = ./main.c ../ex00/ft_putchar.c ../ex01/ft_print_alphabet.c ../ex02/ft_print_reverse_alphabet.c ../ex03/ft_print_numbers.c ../ex04/ft_is_negative.c ../ex05/ft_print_comb.c ../ex06/ft_print_comb2.c ../ex07/ft_put_nbr.c ../ex08/ft_print_combn.c

# Make Implicit Compiles C into Object Files: $(CC) $(CFLAGS) -c $< -o $@
OBJS = $(SRCS:.c=.o)

# Default Rule (First Target)
all_and_clean: all clean

all: $(NAME)

# Build the named binary
$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

# Prevent unnecessary relinking by checking if objects are newer than binary
$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

# Specify Rules as not Filenames
.PHONY: all clean fclean re
