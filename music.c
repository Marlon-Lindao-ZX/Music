#include "music.h"

typedef unsigned char char1;

void prueba(ej_t *ejemplo){

    ejemplo->x = 20 * 5;
    ejemplo->y = 10.5;
    ejemplo->p = ejemplo;
}

int main(int argc, char **argv){

    ej_t ejemplo = {0};

    char1 x;

    ejemplo.x = 20;
    ejemplo.y = 20.5;
    ejemplo.p = &ejemplo;

    /*

    printf("%d\n", ejemplo.x);
    printf("%lf\n",ejemplo.y);
    printf("%p\n", ejemplo.p);

    prueba(&ejemplo);

    printf("%d\n", ejemplo.x);
    printf("%lf\n",ejemplo.y);
    printf("%p\n", ejemplo.p);
    */

    int opt;
    arc_t archivo = {0};

    while((opt = getopt(argc, argv, "f:e:")) > 0){
        switch(opt){
            case 'f':
                strcpy(archivo.nombre,optarg);
                break;
            case 'e':
                strcpy(archivo.extension,optarg);
                break;
            default:
                printf("Opción no reconocida");
                exit(1);
        }
    }

    play_music(&archivo);
    

    return 0;
    
}



void play_music(arc_t *archivo){
    printf("%s.%s\n", archivo->nombre, archivo->extension);


    //system("mpg321 1.mp3");
}

