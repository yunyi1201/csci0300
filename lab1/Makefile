OBJ := reverse_test

CFLAGS = -Wall -Werror -I .

%.o: %.c
	gcc -c $(CFLAGS) $< -o $@

$(OBJ): reverse.o test_reverse.o
	gcc $^ -o $@

.PHONY: clean

clean:
	@rm $(OBJ) $(wildcard *.o)