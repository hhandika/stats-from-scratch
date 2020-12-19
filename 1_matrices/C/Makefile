TARGET= bin/c-mat
CFLAGS=	-Wall -Werror -Wextra -pedantic -o3 -std=c11
OBJS= main.o matrix.o
DEPS= matrix.h

%.o: %.c $(DEPS)
	$(CC) -c $< $(CFLAGS) -o $@

c-mat: $(OBJS)
	$(CC) $^ $(CFLAGS) -o $(TARGET)

clean:
	rm *.o

cleanall:
	rm *.o bin/c-vec