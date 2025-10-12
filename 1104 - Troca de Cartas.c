#include <stdio.h>
#define Tam 100001
int main (){
  int i,ca,cb,x;
  int v1[Tam], v2[Tam];

    scanf("%d %d",&ca,&cb);

   while (ca > 0 && cb > 0){
     for (i = 0; i < Tam ; i++){
       v1[i]=0;
       v2[i]=0;
     }
       for (i = 0; i < ca; i++){
          scanf("%d",&x);
          v1[x]++;
       }
         for (i = 0; i < cb; i++){
          scanf("%d",&x);
          v2[x]++;
       }
       int ta =0,tb = 0;

       for (i = 0; i < Tam;i++){

       if(v1[i]> 0 && v2[i] == 0){
        ta++;
       }

       if(v2[i]> 0 && v1[i] == 0){
        tb++;
       }

    }

       printf("%d\n",(ta < tb)? ta : tb);
       scanf("%d %d", &ca, &cb);
    }

    return 0;
}
