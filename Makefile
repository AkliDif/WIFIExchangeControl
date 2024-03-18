CC = gcc
CFLAGS = -I./headers -lm
DEPS = $(wildcard ./headers/*.h)
OBJ = $(patsubst ./src/%.c, %.o, $(wildcard ./src/*.c))
EXECUTABLE = main

%.o: ./src/%.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

$(EXECUTABLE): main.c $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -f $(OBJ) $(EXECUTABLE)