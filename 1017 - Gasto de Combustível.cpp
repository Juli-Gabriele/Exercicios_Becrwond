#include <iostream>
using namespace std;
int main(){
    double tempo,velocidade,litros;
    cin >> tempo >> velocidade;
    litros = (tempo * velocidade)/12;
    cout.precision(3);
    cout.setf(ios::fixed);
     cout << litros <<endl;
return 0;
}
