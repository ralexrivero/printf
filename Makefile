# compilation process

CC = gcc
CFLAGS = -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format
NAME = printf
SRC_ALL = test/main.c
SRC_BINARY = test/main_binary.c
SRC_FULL = test/main_full.c
SRC_HEXA = test/main_hexa.c
SRC_REVERSE = test/main_rev.c
SRC_SPECIAL = test/main_special_chars.c

all:
	$(CC) $(CFLAGS) *.c $(SRC_ALL) -o $(NAME)

binary:
	$(CC) $(CFLAGS) *.c $(SRC_BINARY) -o $(NAME)

full:
	$(CC) $(CFLAGS) *.c $(SRC_FULL) -o $(NAME)

hexa:
	$(CC) $(CFLAGS) *.c $(SRC_HEXA) -o $(NAME)

reverse:
	$(CC) $(CFLAGS) *.c $(SRC_REVERSE) -o $(NAME)

special:
	$(CC) $(CFLAGS) *.c $(SRC_SPECIAL) -o $(NAME)

fclean:
	$(RM) $(NAME)
