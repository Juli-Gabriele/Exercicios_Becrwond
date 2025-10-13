#include <stdio.h>

int main (){
  int i,n,j,c = 0,x;

    scanf("%d",&n);

     while(i < n){
         i++;
        scanf("%d",&x);
         c = 0;
     for (j = 1 ; j <= x ; j++){
        if (x % j == 0){
            c++;
        }
     }
     if (c == 2){
        printf("Prime\n");

     }else{

        printf("Not Prime\n");
     }

}



    return 0;
}
