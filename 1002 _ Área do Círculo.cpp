#include <iostream>
#include <cmath>
using namespace std;
  int main(){
    double p,raio,area;
    p = 3.14159;
    cin >> raio;
    area = (p * pow (raio,2));
    cout.precision(4);
    cout.setf (ios::fixed);
    cout <<"A=" << area << endl;
        
  return 0;  
    
    
}
