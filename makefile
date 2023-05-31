CC = gcc
CFLAGS = -Wall -Werror -Wextra -pedantic -Iinc -std=gnu89
DEPS = inc/shell.h
OBJ = src/_atoi.o src/builtin.o src/builtin1.o src/environ.o src/errors.o src/errors1.o src/exits.o src/getLine.o src/getenv.o src/getinfo.o src/history.o src/lists.o src/lists1.o src/main.o src/memory.o src/parser.o src/realloc.o src/shell_loop.o src/string.o src/string1.o src/tokenizer.o src/vars.o

%.o: %.c $(DEPS)
	@echo "\033[0;32mCompiling $<\033[0m"
	@$(CC) -c -o $@ $< $(CFLAGS)
	@sleep 1

simple_shell: $(OBJ)
	@echo "\n\033[0;32mLinking $@\033[0m"
	@$(CC) -o $@ $^ $(CFLAGS)
	@make -s clean
	@echo "\n\033[0;32mBuilding simple_shell complete!\033[0m"

clean:
	rm -f $(OBJ)
