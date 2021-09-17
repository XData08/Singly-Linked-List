# ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Makefile

all: main

text.o : text.c linkedlist.h
	gcc -c $^

linkedlist.o : linkedlist.c linkedlist.h
	gcc -c $^

main.o : main.c linkedlist.h
	gcc -c $^

main: main.o linkedlist.o text.o
	gcc -o $@  $^ 

clean : 
	del *.o *.exe *.gch
