CFLAGS = -Wall -g
OBJS = register.o print.o search.o delete.o phoneBookMain.o
all : phoneBookMain
%.o : %.c
	gcc -c -o $@ $(CFLAGS) $<
phoneBookMain : $(OBJS)
	gcc -o phoneBookMain $(OBJS)
clean:
	rm phoneBookMain $(OBJS)
