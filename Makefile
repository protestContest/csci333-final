CC = g++
CFLAGS = -Wall -Werror -Wextra

all: list countwords lexdiversity

list: list.cpp
	$(CC) $(CFLAGS) list.cpp -o list

countwords: count.cpp
	$(CC) $(CFLAGS) count.cpp -o countwords

lexdiversity: lex.cpp
	$(CC) $(CFLAGS) lex.cpp -o lexdiversity

clean:
	rm -rf list
	rm -rf countwords
	rm -rf lexdiversity
