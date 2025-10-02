/*Ao observar a curva de velocidade de um motor, o engenheiro Zé percebeu que sempre ocorria uma queda quando 
as medidas eram feitas em intervalos de 10 ms. Mas esta queda acontecia em medidas diferentes a cada novo teste do motor.
Zé ficou curioso com essa falta de padrão e quer saber, para cada teste do motor, qual a primeira medida em que ocorre uma queda de velocidade.


#include<stdio.h>

int main(){
     int n,atual, anterior;
     scanf("%d",&n);
     scanf("%d",&anterior);
     int pos = 0;
     for (int i = 2; i <= n ;i++){
        scanf("%d",&atual);
        if (atual < anterior){
            pos = i;
            break;
        }

        anterior = atual;

     }
      printf("%d\n",pos);


    return 0;

}
