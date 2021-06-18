#include <stdio.h>
#include <stdlib.h>



int main(int argc, char **argv){

    play_music(NULL);
    
}

void play_music(char *music){
    system("mpg321 1.mp3");
}

