CFLAGS=-Wall -g

all:
	gcc -o Homework3 Homework3.c QuickSort.h QuickSort.c
	gcc -o TestHomework3 TestHomework3.c QuickSort.h QuickSort.c

clean:
	rm -f TestHomework3
	rm -f Homework3