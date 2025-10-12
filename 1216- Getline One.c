#include<stdio.h>
int main(){
    char nome[100];
    double n,media = 0,soma = 0, c = 0;

    while (scanf(" %[^\n]",nome)!= EOF){
     c++;
    scanf("%lf",&n);
    soma += n;
  }
    media = soma /c;
    printf("%.1lf\n", media);
    return 0;


}
