CC	= gcc
CFLAGS	= -ansi -pedantic-errors -Wall -Werror -fno-builtin -Wextra -Wshadow -Wfatal-errors
LDFLAGS	= -lm

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $^

%.bin: %.o
	$(CC) -o $@ $^ $(LDFLAGS)
