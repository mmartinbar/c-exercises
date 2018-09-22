main: main.o sorting.o arrays.o
	cc -o main main.o sorting.o arrays.o

arrays.o: arrays.c arrays.h
	cc -c arrays.c

sorting.o: sorting.c sorting.h arrays.h
	cc -c sorting.c

main.o: main.c arrays.h sorting.h
	cc -c main.c

clean:
	rm main main.o arrays.o sorting.o
