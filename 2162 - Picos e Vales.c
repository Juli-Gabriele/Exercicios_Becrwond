/*Ao observar a paisagem da Nlogônia, o professor MC percebeu que a cada intervalo de 100 metros existe um pico. 
E que exatamente na metade de dois picos há um vale. Logo, a cada 50 metros há um vale ou um pico e, ao longo da paisagem, 
não há um pico seguido por outro pico, nem um vale seguido por outro vale.
O professor MC ficou curioso com esse padrão e quer saber se, ao medir outras paisagens, isso se repete.
Sua tarefa é, dada uma paisagem, indicar se ela possui esse padrão ou não.*/


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
