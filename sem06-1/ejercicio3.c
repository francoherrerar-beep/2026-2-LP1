#include <stdio.h>
int main(){

int *ptr; //se define ptr como puntero
          //es una variable que opera con direccion de memoria    
          //inicialmente apunta a algun lugar de la memoria (tiene un lugar de memoria)
/*regla: si se crea el puntero se requiere inicializar antes de usar */
int cantidad=200;
ptr=0; //NULL ES CERO
 if(ptr==NULL){
    ptr=&cantidad;
    printf("Puntero inicializado, su direccion es %p y su valor es %d",ptr,*ptr);

 } else{
    printf("el puntero ya tiene memoria, no es necesario inicializador!\n");
 }


    return 0;
}