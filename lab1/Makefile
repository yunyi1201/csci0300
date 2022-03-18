OBJ := reverse_test

CFLAGS = -Wall -Werror -I .

SOUR := $(basename $(shell find -name "*.c"))
DEPE := $(addsuffix .o, $(SOUR))

print:
	echo $(SOUR)
	echo $(DEPE)

%.o: %.c
	gcc -c $(CFLAGS) $< -o $@

$(OBJ): $(DEPE)
	gcc $^ -o $@

.PHONY: clean

clean:
	@rm $(OBJ) $(wildcard *.o)