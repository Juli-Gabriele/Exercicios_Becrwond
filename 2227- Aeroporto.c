/*Entrada
A entrada é composta de vários conjuntos de teste. A primeira linha de um conjunto de teste contém dois números inteiros 
A (0 ≤ A ≤ 100) e V (0 ≤ V ≤ 10000), que indicam respectivamente o número de aeroportos e o número de vôos.
Os aeroportos são identificados por inteiros de 1 a A. As V linhas seguintes contêm cada uma a informação de um vôo, 
representada por um par de números inteiros positivos
X e Y (1 ≤ X ≠ Y ≤ A), indicando que há um vôo do aeroporto X para o aeroporto Y.
  O final da entrada é indicado quando A = V = 0.

Saída
Para cada conjunto de teste da entrada seu programa deve produzir três linhas.
A primeira linha identifica o conjunto de teste, no formato “Teste n”, onde n é numerado a partir de 1.
A segunda linha deve conter o identificador do aeroporto que possui maior tráfego aéreo. 
Caso mais de um aeroporto possua este valor máximo, 
você deve listar todos estes aeroportos, em ordem crescente de identificação, e separados por pelo menos um espaço em branco. 
A terceira linha deve ser deixada em branco. A grafia mostrada no Exemplo de Saída, abaixo, deve ser seguida rigorosamente.*/


#include<stdio.h>

int main(){
    int a,i,v,x,y,maior,cont = 1;

    scanf("%d %d",&a,&v);
    while(!(a == 0 && v== 0)){
    int v1[a + 1];
    for (i = 0 ;i <= a;i++){
     v1[i]= 0;
   }
     for (i = 0; i < v;i++){
       scanf("%d %d",&x,&y);
            v1[x]++;
            v1[y]++;

    }
      maior = v1[1];
         for(i = 1;i <= a; i++){
              if (v1[i] > maior) {
                maior = v1[i];
            }
    }
     printf("Teste %d\n",cont);
      for(i = 1;i <= a; i++){
        if (v1[i] == maior) {
       printf("%d ", i);
    }

}
     cont++;
     printf("\n\n");
     scanf("%d %d",&a,&v);

    }

return 0;
}
