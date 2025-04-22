#include <iostream>
using namespace std;
int main(){
   double valor;
   int notas, moedas;
   cin >> valor;
   notas = valor;
   moedas = ( valor * 100 ) - (notas * 100);
  int not100 = notas /100;
  notas = notas % 100;
  int not50 = notas /50;
  notas = notas % 50;
  int not20 = notas /20;
  notas = notas % 20;
  int not10 = notas /10;
  notas = notas % 10;
  int not5 = notas /5;
  notas = notas % 5;
  int nota2 = notas /2;
  notas = notas % 2;
  int moedas100 = notas;
  int moedas50 =  moedas/50;
  moedas = moedas % 50;
  int moedas25 = moedas/25;
  moedas = moedas % 25;
  int moedas10 = moedas/10;
  moedas = moedas % 10;
  int moedas5 = moedas/5;
  moedas = moedas % 5;
  int moedas1 = moedas;
  cout <<("NOTAS:")<<endl;
  cout <<not100 <<(" nota(s) de R$ 100.00")<<endl;
  cout <<not50<<(" nota(s) de R$ 50.00")<<endl;
  cout <<not20<<(" nota(s) de R$ 20.00")<<endl;
  cout <<not10 <<(" nota(s) de R$ 10.00")<<endl;
  cout <<not5 <<(" nota(s) de R$ 5.00")<<endl;
  cout <<nota2 <<(" nota(s) de R$ 2.00")<<endl;
  cout <<("MOEDAS:")<<endl;
  cout <<moedas100 <<(" moeda(s) de R$ 1.00")<<endl;
  cout <<moedas50 <<(" moeda(s) de R$ 0.50")<<endl;
  cout <<moedas25 <<(" moeda(s) de R$ 0.25")<<endl;
  cout <<moedas10 <<(" moeda(s) de R$ 0.10")<<endl;
  cout <<moedas5 <<(" moeda(s) de R$ 0.05")<<endl;
  cout <<moedas2 <<(" moeda(s) de R$ 0.02")<<endl;
  cout <<moedas1 <<(" moeda(s) de R$ 0.01")<<endl;















}
