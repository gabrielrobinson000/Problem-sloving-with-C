CC	= gcc
CFLAGS	= -std=gnu99 -pedantic-errors -Wall -Werror -fno-builtin -Wextra -Wshadow -Wfatal-errors -Wformat=2
LDFLAGS	= -lm

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $^

%.bin: %.o
	$(CC) -o $@ $^ $(LDFLAGS)
