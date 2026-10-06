#include <stdio.h>


int main(){

int c[5];

printf("la direccion del arreglo c es %p\n",c);
printf("la direccion del 1er elemento de c es %p\n",&c[0]);
printf("y su valor es %d\n",c[0]);
printf("la direccion del 2er elemento de c es %p\n",&c[1]);
printf("y su valor es %d\n",c[1]);

printf("inicializador los valores a 1\n");
for(size_t i=0;i<5;i++){
    c[i]=1;
}
printf("la direccion del 1er elemento de c es %p\n",&c[0]);
printf("y su valor es %d\n",c[0]);
printf("la direccion del 2er elemento de c es %p\n",&c[1]);
printf("y su valor es %d\n",c[1]);




    return 0;
}