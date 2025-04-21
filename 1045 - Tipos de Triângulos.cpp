#include <iostream>
#include <cmath>
using namespace std;
int main(){
  double a ,b ,c, maior,medio,menor;
  cin >> a >> b >> c;
  if (a > 0 && b > 0 && c >0){
   if( a >= b && b >= c){
    maior = a;
    medio = b;
    menor = c;
   }
   if( b >= a && a >= c){
    maior = b;
    medio = a;
    menor = c;
   }
   if( c >= a && a >= b){
    maior = c;
    medio = a;
    menor = b;
   }
   if( c >= a && a <= b){
    maior = c;
    medio = b;
    menor = a;
   }
   if( a >= c && c >= b){
    maior = a;
    medio = c;
    menor = b;
   }
   if( b >= c && c >= a){
    maior = b;
    medio = c;
    menor = a;
   }

   if (maior >= ( medio + menor)){
     cout <<("NAO FORMA TRIANGULO")<< endl;
     return 0;
  }
   if(pow(maior,2) == (pow(medio,2)+ pow(menor,2))){
     cout <<(" TRIANGULO RETANGULO ")<< endl;
  }
   if(pow(maior,2)> (pow(medio,2)+ pow(menor,2))){
     cout <<("TRIANGULO OBTUSANGULO ")<< endl;
  }
   if(pow(maior,2)< (pow(medio,2)+ pow(menor,2))){
     cout <<("TRIANGULO ACUTANGULO ")<< endl;
  }
   if(maior == medio && menor ==c ){
     cout <<(" TRIANGULO EQUILATERO")<< endl;
  }
   if((maior == medio && medio != menor) || (maior == menor && menor!= medio) || (medio == menor && menor != maior)){
     cout <<(" TRIANGULO ISOSCELES ")<< endl;
  }

   }



}


