#include <stdio.h>
#include <string.h>
#include <ctype.h>
void contar_vocales(const char *texto,int *vocales, int *consonantes, int *digitos, int *otros){
const char *p=texto;
int i=0;
while(*(p+i)!='\0'){
if(*(p+i)=='a'||*(p+i)=='e'||*(p+i)=='i'||*(p+i)=='o'||*(p+i)=='u'||*(p+i)=='A'||*(p+i)=='E'||*(p+i)=='I'||*(p+i)=='O'||*(p+i)=='U'){
    *vocales++;
} else if(*(p+i)=='0'||*(p+i)=='1'||*(p+i)=='2'||*(p+i)=='3'||*(p+i)=='4'||*(p+i)=='5'||*(p+i)=='6'||*(p+i)=='7'||*(p+i)=='8'||*(p+i)=='9')
{
    *digitos++;
} else if(*(p+i)=='q'||*(p+i)=='w'||*(p+i)=='r'||*(p+i)=='t'||*(p+i)=='y'||*(p+i)=='p'||*(p+i)=='s'||*(p+i)=='d'||*(p+i)=='f'||*(p+i)=='g'||*(p+i)=='h'||*(p+i)=='j'||*(p+i)=='k'||*(p+i)=='l'||*(p+i)=='z'||*(p+i)=='x'||*(p+i)=='c'||*(p+i)=='v'||*(p+i)=='b'||*(p+i)=='n'||*(p+i)=='m'||*(p+i)=='Q'||*(p+i)=='W'||*(p+i)=='R'||*(p+i)=='T'||*(p+i)=='Y'||*(p+i)=='P'||*(p+i)=='S'||*(p+i)=='D'||*(p+i)=='F'||*(p+i)=='G'||*(p+i)=='H'||*(p+i)=='J'||*(p+i)=='K'||*(p+i)=='L'||*(p+i)=='Z'||*(p+i)=='X'||*(p+i)=='C'||*(p+i)=='V'||*(p+i)=='B'||*(p+i)=='N'||*(p+i)=='M'){
    *consonantes++;
} else{
    *otros++;
}
}

}
int main(void){
char mensaje[256];
int vocales=0;
int consonantes=0;
int digitos=0;
int otros=0;
fgets(mensaje,255,stdin);
contar_vocales(mensaje,&vocales,&consonantes,&digitos,&otros);
printf("%s\n",mensaje);
printf("%d\n",vocales);
printf("%d\n",consonantes);
printf("%d\n",digitos);
printf("%d\n",otros);
    return 0;
}