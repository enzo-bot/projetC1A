GCC = gcc
SOURCES = $(wildcard *.c)
BINAIRES = $(patsubst %.c, %.o, ${SOURCES})

all: main %.o

main: ${BINAIRES}
	${GCC} $^ -o $@
	
%.o: %.c %.h
	${GCC} -c $<
	
clean:
	rm main
	rm *.o
