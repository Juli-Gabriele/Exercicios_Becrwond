#include<stdio.h>
#define Tam 20
int main(){
     int v[Tam],aux = 0;
     int i,j = Tam - 1 ;
     for (i = 0; i < Tam; i++){
       scanf("%d",&v[i]);
     }
     do {
       printf("N[%d] = %d\n",aux,v[j]);
       aux++;
       j--;
    }while(j >= 0);



 return 0;

}
