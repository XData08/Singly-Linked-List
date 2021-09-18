# ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Makefile

SOURCE := main
DEPENDENDCIES := main.o text.o linkedlist.o

OBJECT_CMD := gcc -c 
COMPILE_CMD := gcc -o

all: ${SOURCE}

${SOURCE} : ${DEPENDENDCIES}
	${COMPILE_CMD} $@ $^

%.o : %.c linkedlist.h
	${OBJECT_CMD} $<

clean : 
	del *.o  *.exe *.gch