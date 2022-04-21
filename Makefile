# ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Makefile
SOURCE := main
DEPENDENDCIES := main.o singlylinkedlist.o text.o 

OBJECT_CMD := gcc -c 
COMPILE_CMD := gcc -o

all: ${SOURCE}

${SOURCE} : ${DEPENDENDCIES}
	${COMPILE_CMD} $@ $^

%.o : %.c singlylinkedlist.h
	${OBJECT_CMD} $<

clean : 
	del *.o  *.exe *.gch