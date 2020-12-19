TARGET= bin/c-cdt
CFLAGS=	-Wall -Werror -Wextra -pedantic -lm -o3 -std=c11
OBJS= main.o ctd.o
DEPS= ctd.h

%.o: %.c $(DEPS)
	$(CC) -c $< $(CFLAGS) -o $@

c-cdt: $(OBJS)
	$(CC) $^ $(CFLAGS) -o $(TARGET)

clean:
	rm *.o

cleanall:
	rm *.o bin/c-cdt