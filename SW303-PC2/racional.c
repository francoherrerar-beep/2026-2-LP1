#include <stdio.h>
#include "racional.h"

static int es_primo(int n){
    if (n<2){
        return 0;
    }

    for (int i=2;i<=n/i;i++){
        if(n % i == 0){
        return 0;
        }
    }

    return 1;
}
int mcd(int a, int b) {
    if (a<0) a=-a;
    if (b<0) b=-b;
    if (b==0){
        return a;
    }

    return mcd(b,a%b);
}


void simplificar(int *num, int *den) {
    if (*den == 0) {
        return; 
    }

    
    if (*den < 0) {
        *den = -*den;
        *num = -*num;
    }

    
    if (*num == 0) {
        *den = 1;
        return;
    }

    int absoluto = (*num < 0) ? -*num : *num;

   
    if (es_primo(absoluto) && (*den % absoluto != 0)) {
        return;
    }

    int divisor = mcd(*num, *den);

    *num /= divisor;
    *den /= divisor;
}


void sumar(int n1, int d1, int n2, int d2,
           int *n_res, int *d_res) {
    if (d1 == 0 || d2 == 0) {
        *n_res = 0;
        *d_res = 0;
        return;
    }

    *n_res = n1 * d2 + n2 * d1;
    *d_res = d1 * d2;

    simplificar(n_res, d_res);
}