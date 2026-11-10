#include <stdio.h>
#include <string.h>
struct Alumno {
int codigo;
int edad;
char nombre[20];
};

void mostrar(struct Alumno a){
printf("codigo: %d\n",a.codigo);
printf("nombre:   %s\n",a.nombre);
printf("edad: %d\n",a.edad);
}


int main(void){

struct Alumno a1;
struct Alumno a2[5];
struct Alumno a3={1250,18,"abel"};
//llenar los datos
a1.codigo= 123;
a1.edad= 25;
strcpy(a1.nombre, "jhonny");
//mostrar los datos
mostrar(a1);

mostrar(a3);

for(int i=0; i<5 ; i++){
    a2[i].codigo = 100+i;
    a2[i].edad = 12+i;
}

for(int i=0; i<5; i++){
mostrar(a2[i]);
}

return 0;

}