final: main.o
	gcc main.o -o output -Wall -Wextra -Wconversion -O2

main.o: main.c
	gcc main.c -c

clean:
	rm main.o output
