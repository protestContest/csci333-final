CC = g++
CFLAGS = -Wall -Werror -Wextra

list: list.cpp list.h
	$(CC) $(CFLAGS) list.cpp -o list
