#include <iostream>
#include <cmath>
using namespace std;
int main(){
  double a,b,c;
  cin >> a >> b >> c;
  double delta = (pow(b,2)- 4*a*c);
  if((a == 0)|| (delta < 0)){
    cout <<("Impossivel calcular") <<endl;
    return 0;
  }
  double r1 = ((-b + sqrt(delta))/ (2 * a));
  double r2 = ((-b - sqrt(delta))/ (2 * a));
  cout.precision(5);
  cout.setf(ios::fixed);
  cout <<("R1 = ")<< r1 <<endl;
  cout <<("R2 = ") <<r2 <<endl;


}



