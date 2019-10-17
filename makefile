all: main.o functions.o
	gcc -o program main.o functions.o
main.o: main.c headers.h
	gcc -c main.c
functions.o: functions.c headers.h
	gcc -c functions.c
run:
	./program
clean:
	rm *.o
