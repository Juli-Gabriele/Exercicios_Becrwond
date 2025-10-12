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

//Outra possibilidade

#include <stdio.h>
#define Tam 5
int main (){
  int i,j,v[Tam];

   for (int i= 0; i < Tam ; i++){
        scanf("%d",&v[i]);
   }
    for (i = 0,j = Tam - 1; i < j; i++,j--) {
            int x = v[i];
             v[i] = v[j];
              v[j] = x;
    }

    for (i = 0; i < Tam; i++){
        printf("N[%d] = %d\n", i, v[i]);
    }



 return 0;
}

