#include <stdio.h>

int main (){
  int i,t,n,menor;

   scanf("%d",&n);
    int v[n];
    scanf("%d",&v[0]);
    menor = v[0];
    int p = 0;
   for (i = 1; i < n ; i++){
        scanf("%d",&v[i]);
        if (v[i] < menor){
            menor = v[i];
            p = i;
        }
   }

    printf("Menor valor: %d\n",menor);
    printf("Posicao: %d\n",p);



 return 0;
}
