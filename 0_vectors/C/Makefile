TARGET= bin/c-vec
CFLAGS=	-Wall -Werror -Wextra -pedantic -o3 -lm -std=c11
OBJS= main.o vector.o
DEPS= vector.h

%.o: %.c $(DEPS)
	$(CC) -c $< $(CFLAGS) -o $@

c-vec: $(OBJS)
	$(CC) $^ $(CFLAGS) -o $(TARGET)

clean:
	rm *.o

cleanall:
	rm *.o bin/c-vec