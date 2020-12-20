TARGET= bin/c-disp
CFLAGS=	-Wall -Werror -Wextra -pedantic -lm -o3 -std=c11
OBJS= main.o disp.o
DEPS= disp.h

%.o: %.c $(DEPS)
	$(CC) -c $< $(CFLAGS) -o $@

c-disp: $(OBJS)
	$(CC) $^ $(CFLAGS) -o $(TARGET)

clean:
	rm *.o

cleanall:
	rm *.o bin/c-disp