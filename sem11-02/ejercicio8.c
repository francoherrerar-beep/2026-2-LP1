#include <stdio.h>
#include <stdlib.h>

typedef struct nodo {
    int valor;
    struct nodo *izq, *der;
} Nodo;

void insertar(Nodo **p, int valor) {
    if (*p == NULL) {
        *p = malloc(sizeof(Nodo));
        if (*p == NULL) {
            fprintf(stderr, "Error: no hay memoria disponible\n");
            return;
        }
        (*p)->valor = valor;
        (*p)->izq = NULL;
        (*p)->der = NULL;
    }
    else if (valor < (*p)->valor) {
        insertar(&((*p)->izq), valor);
    }
    else {
        insertar(&((*p)->der), valor);
    }
}

int buscar(Nodo *p, int valor) {
    if (p == NULL) {
        return 0;
    }
    else if (valor == p->valor) {
        return 1;
    }
    else if (valor < p->valor) {
        return buscar(p->izq, valor);
    }
    else {
        return buscar(p->der, valor);
    }
}

int main(void) {
    Nodo *arbol = NULL;

    insertar(&arbol, 10);
    insertar(&arbol, 12);
    insertar(&arbol, 7);
    
    if (buscar(arbol, 10)) {
        printf("se encontró el valor 10\n");
    } else {
        printf("no se encontró el valor 10\n");
    }


    if (buscar(arbol, 4)) {
        printf("se encontró el valor 4\n");
    } else {
        printf("no se encontró el valor 4\n");
    }

  
    return 0;
}