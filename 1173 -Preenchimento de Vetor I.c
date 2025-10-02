#include<stdio.h>
#define Tam 10
int main(){
    int v[Tam],i,n;
    scanf("%d",&n);
    for (i = 0; i < Tam; i++){
     if(i == 0){
       v[i] = n;
     }else {
      v[i] = n*2;
      n = v[i];
     }
   printf("N[%d] = %d\n",i,v[i]);
  }



   return 0;


}

