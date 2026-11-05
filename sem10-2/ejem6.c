#include <stdio.h>

int main(){
    FILE *archivo;
    char linea[100];

    archivo = fopen("datos.txt", "r+");

    if(archivo == NULL){
        printf("Error al abrir el archivo. \n");
        return 1;
    }

    //leer el contenido
    fgets(linea, sizeof(linea), archivo);

    printf("Contenido original: %s\n",linea);

    //posicionarse al inicio
    fseek(archivo, 0, SEEK_SET);

    //Sobreescribir
    fprintf(archivo,"XYZ");

    fclose(archivo);

    return 0;
}