all: play.exe

play.exe : main.o poker.o
	gcc main.o poker.o -o play.exe

main.o : main.c
	gcc -c main.c

poker.o : poker.c
	gcc -c poker.c

clean:
	rm -f *.o *.exe *~


