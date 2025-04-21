#include <iostream>
using namespace std;
int main(){
 double valor,res1,res2,res3,res4,res5,result;
 cin >> valor;
 if ( valor >= 0 && valor <= 2000.0){
    cout << ("Isento") << endl;
}
 if ( valor > 2000.0 && valor <= 3000.0){
      res1 = (valor - 2000);
      result = res1 *0.08 ;
      cout.precision(2);
      cout.setf(ios::fixed);
      cout << ("R$ ") << result << endl;
}
 if ( valor > 3000.0 && valor <= 4500){
     res1 = (valor - 2000);
     res2 =  (valor - 3000);
     res3 = res1 - res2;
     result = ((res3* 0.08) + (res2 *0.18));
     cout.precision(2);
     cout.setf(ios::fixed);
     cout << ("R$ ") << result << endl;
}
  if ( valor > 4500){
    res1 = (valor - 2000);
    res2 = (valor - 3000);
    res3 = (valor - 4500);
    res4 = (res1 - res2);
    res5 = (res2- res3);
    result = ((res4* 0.08) + (res5 *0.18) + (res3 *0.28));
    cout.precision(2);
    cout.setf(ios::fixed);
    cout << ("R$ ") << result << endl;

}

}


