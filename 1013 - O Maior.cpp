#include <iostream>
#include <cmath>
using namespace std;
int main(){
   int a,b,c,calculo,maior;
   cin >> a >> b >> c;
    calculo= ((a + b) + abs(a-b))/2;
    maior= ((calculo + c) + abs(calculo - c))/2;
    cout << maior <<" eh o maior" <<endl;

return 0;

}
