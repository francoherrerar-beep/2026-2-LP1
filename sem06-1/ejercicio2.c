#include <stdio.h>
#define FILAS 5
#define COLUMNAS 5


int main(){

//definir un arreglo bidimensional
double matriz[FILAS][COLUMNAS];


//INCIALIZACION
for(size_t f=0; f<FILAS; f++){
    for(size_t c=0; c<COLUMNAS; c++){
        matriz[f][c]=0.0;
    }
}

//MOSTRAR
for(size_t f=0; f<FILAS; f++){
    for(size_t c=0; c<COLUMNAS; c++){
        printf("\t%lf",matriz[f][c]);
    }
    printf("\n"); //cambio de linea
}

    return 0;
}