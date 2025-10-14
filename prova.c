#include<stdio.h>
int main(){
    int n,i;
    char x;
    scanf("%d",&n);
    int v[n];
    if (n >= 2 && n <= 10){

         for (i = 0 ; i < n; i++){
            scanf("%d",&v[i]);
         }

          if (n == 2 || v[0] < 65 && v[1] < 65 ){
             printf("N\n");
           return 0;

          }else {
             printf("S\n");

          return 0;
         }

         for (i = 1 ; i < n - 1; i++){
                if ((v[i] >= 65 && v[i - 1] < 65) || (v[i] < 65 && v[i + 1] >= 65)){
                 x ='N';

          }
        }
      printf("%c",x);

    }



return 0;
}

