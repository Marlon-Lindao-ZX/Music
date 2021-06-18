
all: music

music: music.o
	gcc -o music music.o 

music.o: music.c
	gcc -c music.c

.PHONY:
clean:
	rm *.o music

