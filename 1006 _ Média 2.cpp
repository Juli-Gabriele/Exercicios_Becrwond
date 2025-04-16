#include <iostream>
using namespace std;
int main(){
    double a,b,c,media;
    cin>> a >> b >> c;
    media = ((a*2)+(b*3)+(c*5))/10;
    if (((a >= 0)and (a <= 10))and ((b >= 0)and (b <= 10))and((c >= 0)and (c <= 10))){
      cout.precision(1);
      cout.setf(ios::fixed);
      cout <<"MEDIA = " << media << endl;

    }
 return 0;
}


