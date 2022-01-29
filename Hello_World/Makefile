
output: main.o hello.o
	 gcc main.o hello.o -o a

main.o: main.c
	 gcc -c main.c

hello.o: hello.c hello.h
	gcc -c  hello.c

clean:
	rm *.o output

