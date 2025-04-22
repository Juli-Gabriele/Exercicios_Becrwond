#include <iostream>
using namespace std;
int main(){
  int  quant;
  quant = 0;
  double n1,n2,n3,n4,n5,n6;
  cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6;
  if (n1 > 0){
    quant = quant + 1;
  }
  if (n2 > 0){
    quant = quant + 1;
  }if (n3 > 0){
    quant = quant + 1;
  }if (n4 > 0){
    quant = quant + 1;
  }if (n5 > 0){
    quant = quant + 1;
  }if (n6 > 0){
    quant = quant + 1;
  }
  cout << quant <<(" valores positivos") <<endl;



}
