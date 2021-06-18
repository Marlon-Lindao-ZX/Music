#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>
#include <string.h>

#define MAX 125

typedef struct Archivo{
    char *nombre;
    char *extension;
} arc_t;

typedef struct Ejemplo{
    int x;
    double y;
    void *p;
} ej_t;

void play_music(arc_t *archivo);