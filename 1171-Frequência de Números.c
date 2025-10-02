#include<stdio.h>
#define Tam 2001
int main(){
   int i,n,x,v[Tam];

   for (i = 0 ;i < Tam;i++){
     v[i]= 0;
   }
    scanf("%d",&n);
   for (i =0 ;i < n;i++){
      scanf("%d",&x);
      v[x]++;

   }
   for (i = 0 ;i < Tam;i++){
    if (v[i] > 0){
      printf("%d aparece %d vez(es)\n",i,v[i]);
     }
   }

 return 0;

}
