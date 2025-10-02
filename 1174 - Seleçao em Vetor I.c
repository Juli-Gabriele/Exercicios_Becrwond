#include<stdio.h>
#define Tam 100
int main(){
     double v[Tam];
     int i;

     for (i = 0; i < Tam ;i++){
        scanf("%lf",&v[i]);
        if (v[i] <= 10.0){

        printf("A[%d] = %.1lf\n",i,v[i]);
        }

    }



    return 0;

}
