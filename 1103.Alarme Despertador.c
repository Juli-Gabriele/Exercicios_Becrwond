#include<stdio.h>
int main(){
    int h1,h2,m1,m2,resu = 0,tmin1 = 0,tmin2 = 0;
    scanf("%d%d%d%d",&h1,&m1,&h2,&m2);
     if(h1 == 0 && m1== 0 && h2 == 0 && m2 == 0){
         return 0;
    }

    tmin1 = h1 * 60 + m1;
    tmin2 = h2 * 60 + m2;

    while ( tmin1 != 0 && tmin2 != 0){
        resu = 0;
        if(tmin1 > tmin2){
            resu = (1440 - tmin1) + tmin2;
            printf("%d\n",resu);

        }
        if (tmin1 < tmin2){
            resu = tmin2 - tmin1;
            printf("%d\n",resu);

        }
        if (tmin1 == tmin2){
            printf("0\n");
        }
        scanf("%d%d%d%d",&h1,&m1,&h2,&m2);
         tmin1 = h1 * 60 + m1;
         tmin2 = h2 * 60 + m2;


    }


}
