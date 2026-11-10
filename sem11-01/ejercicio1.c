#include <stdio.h>
#include <string.h>
struct Alumno{
int codigo;
int edad;
char nombre[20];
};



int main(void){

struct Alumno a1;
struct Alumno a2[5];
struct Alumno a3={1250,18,"abel"};
//llenar los datos
a1.codigo= 123;
a1.edad= 25;
strcpy(a1.nombre, "jhonny");
//mostrar los datos
printf("codigo: %d\n",a1.codigo);
printf("nombre:   %s\n",a1.nombre);
printf("edad: %d\n",a1.edad);

printf("codigo: %d\n",a3.codigo);
printf("nombre:   %s\n",a3.nombre);
printf("edad: %d\n",a3.edad);

for(int i=0; i<5 ; i++){
    a2[i].codigo = 100+i;
    a2[i].edad = 12+i;
}

for(int i=0; i<5; i++){
    printf("codigo:   %d\n",a2[i].codigo);
    printf("edad:    %d\n",a2[i].edad);
}

return 0;

}