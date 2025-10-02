/*Neste problema você deverá ler 15 valores colocá-los em 2 vetores conforme estes valores forem pares ou ímpares.
Só que o tamanho de cada um dos dois vetores é de 5 posições. Então, cada vez que um dos dois vetores encher, 
você deverá imprimir todo o vetor e utilizá-lo novamente para os próximos números que forem lidos. Terminada a leitura,
deve-se imprimir o conteúdo que restou em cada um dos dois vetores, imprimindo primeiro os valores do vetor impar. 
Cada vetor pode ser preenchido tantas vezes quantas for necessário.*/


#include <stdio.h>
#define Tam 5
int main()
{
   int v1[Tam],v2[Tam],i,v;
   int p= 0, q= 0;
   for (i= 0; i < 15;i++){
       scanf("%d",&v);
       if (v % 2 == 0){
           v1[p] = v;
            p++;
       if (p == Tam){
           for(int x = 0; x < Tam;x++){
           printf("par[%d] = %d\n",x,v1[x]);
       }
       p = 0;
   }
   } else  {
         v2[q] = v;
         q++;
       if (q == Tam){
           for(int x = 0; x < Tam;x++){
           printf("impar[%d] = %d\n",x,v2[x]);
           
       }
       q = 0;
   }
   }
   }
         if(q > 0){
          for(int x = 0; x < q;x++){
          printf("impar[%d] = %d\n",x,v2[x]);
         }
         }
          if (p > 0 ){
          for(int x = 0; x < p ;x++){
          printf("par[%d] = %d\n",x,v1[x]);
 
          }
         }

    return 0;
}
