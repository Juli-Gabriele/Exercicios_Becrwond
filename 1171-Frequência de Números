#include<stdio.h>
#define Tam 100
int main(){
   int n,x,v[Tam],p = 1;
    scanf("%d",&n);

   for (int i = 0 ;i < n;i++){
     scanf("%d",&v[i]);
   }
   if (n< 2 || v[0]==v[1]){
    printf("0\n");
    return 0;
   }
   for (int i = 1 ;i < n - 1;i++){
     if (!((v[i] > v[i-1] && v[i] > v[i+1])||
         (v[i] < v[i-1] && v[i] < v[i+1]))){
        p = 0;
        break;
     }
   }

     printf("%d\n",p);


 return 0;

}
