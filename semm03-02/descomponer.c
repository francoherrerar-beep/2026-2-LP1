#include <stdio.h>

int main(){
int a=1234;
printf("miles= %d\n", a/1000);
printf("centenas= %d\n", (a/100)%10);
printf("decenas= %d\n", (a/10)%10);
printf("unidades= %d\n",a%10);

return 0;
}