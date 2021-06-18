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
                archivo.nombre = (char *) malloc((strlen(optarg) + 1) * sizeof(char));
                memset(archivo.nombre, 0, (strlen(optarg) + 1));
                strcpy(archivo.nombre,optarg);
                break;
            case 'e':
                archivo.extension = (char *) calloc(strlen(optarg) + 1, sizeof(char));
                strcpy(archivo.extension,optarg);
                break;
            default:
                printf("Opción no reconocida");
                exit(1);
        }
    }

    play_music(&archivo);

    free(archivo.nombre);
    free(archivo.extension);
    

    return 0;
    
}



void play_music(arc_t *archivo){

    char command[MAX*2] = {0};

    strcat(command, "mpg321 ");
    strcat(command, archivo->nombre);
    strcat(command, ".");
    strcat(command, archivo->extension);

    system(command);


    //
}

