#include <stdio.h>

int main(void){
    int a=11;
    printf("c version: %ld\n",__STDC_VERSION__);
    printf("int: %zu bytes|long: %zu bytes|float: %zu bytes|double: %zu bytes\n",sizeof(int),sizeof(long),sizeof(float),sizeof(double));
    return 0;
}
