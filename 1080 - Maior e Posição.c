#include <stdio.h>
#define Tam 100

int main (){
  int i, maior, p= 0,x;
   scanf("%d",&x);
      maior = x;
      p = 1;
    for (i = 2; i <= Tam ; i++){
        scanf("%d",&x);
    if (x > maior){
        maior = x;
        p = i;
    }
    }
    printf("%d\n",maior);
    printf("%d\n",p);

    return 0;
}
