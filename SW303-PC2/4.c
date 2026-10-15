#include <stdio.h>
int ackerman(int m, int n){
    static int y=0;
    if(m==-1){
        return y;
    }
    y++;
    if(m==0)  return n+1;
     if(n==0 && m>0 ) return ackerman(m-1,1);
     if (n>0 && m>0) return ackerman(m-1,ackerman(m,n-1));
}
int main(){
    int m=3;
    int n=4;
    printf("el resultado es :%d\n",ackerman(m,n));
    printf(" el numero de llamadas es: %d\n",ackerman(-1,0));
    return 0;
}