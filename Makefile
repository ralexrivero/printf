# compilation process

CC = gcc
CFLAGS = -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format
NAME = printf
SRC_MAIN = test/main.c

all:
	$(CC) $(CFLAGS) *.c $(SRC_MAIN) -o $(NAME)

fclean:
	$(RM) $(NAME)
