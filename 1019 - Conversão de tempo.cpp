#include <iostream>
using namespace std;
int main(){
   int segundos,hor,minu,segu;
   cin >> segundos;
   hor = segundos / 3600;
   segundos = segundos % 3600;
   minu = segundos /60;
   segundos = segundos % 60;
   segu = segundos;
   cout << hor << (":") << minu << (":") << segu << endl;



}
