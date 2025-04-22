#include <iostream>
using namespace std;
int main(){
  int  quant;
  quant = 0;
  double n1,n2,n3,n4,n5,n6,media,soma;
  soma = 0;
  cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6;
  if (n1 > 0){
    quant = quant + 1;
    soma = n1 + soma;
  }
  if (n2 > 0){
    quant = quant + 1;
    soma = n2 + soma;

  }if (n3 > 0){
    quant = quant + 1;
    soma = n3 + soma;

  }if (n4 > 0){
    quant = quant + 1;
    soma = n4 + soma;

  }if (n5 > 0){
    quant = quant + 1;
    soma = n5 + soma;

  }if (n6 > 0){
    quant = quant + 1;
    soma = n6 + soma;
  }
  media = soma/quant;
  cout << quant <<(" valores positivos") <<endl;
  cout.precision(1);
  cout.setf(ios::fixed);
  cout << media <<endl;



}
