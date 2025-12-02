#include <stdio.h>
#include<string.h>
 int main(){
    char frase[100],sequencia[100];
    int j, i,tam,p;
    scanf("%[^\n]",frase);


     for(i = 0; frase[i] != '\0'; i++){
        char c = frase [i];
        if (c == 'a' || c == 'g' ||c == 't' || c == 'c') {
        tam = strlen(frase);
    }
    }
          for (i = 0; i < tam; i++){
            for (j = tam -1 ; j >= 0; j-- ){

               if( frase[i] == frase[j]){
                 p = 1;
               }else {
                 p = 0;
               }

        }

        }

         printf("%d\n", p);



 return 0;
 }
