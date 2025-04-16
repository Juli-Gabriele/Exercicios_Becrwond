#include <iostream>
using namespace std;
int main(){
   char nome [10];
   double salario,mont,total;
    cin >> nome >> salario >> mont;
    total = ((mont * 0.15) + salario);
    cout.precision(2);
    cout.setf(ios::fixed);
    cout <<"TOTAL = R$ " << total << endl;
    return 0;
}
