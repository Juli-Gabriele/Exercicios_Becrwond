#include <stdio.h>
#define Tam 12

int main(){
   int i,j;
   char op;
   double soma = 0, q = 0, m[Tam][Tam];

    scanf("%c",&op);
    for (i = 0; i < Tam ; i++){
       for (j = 0; j < Tam; j++){
            scanf("%lf",&m[i][j]);
          if (( i > j) && (i + j < Tam - 1)){
            soma += m[i][j];
            q++;
        }
      }

   }
     if (op == 'M'){
        printf("%0.1lf\n",soma/q);
     }else {

        printf("%0.1lf\n",soma);
     }





    return 0;
}



