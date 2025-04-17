#include<iostream>
using namespace std;
int main(){
 int valor,ano,dias,mes;
 cin >> valor;
 ano =  valor /365;
 valor = valor % 365;
 mes =  valor /30;
 valor = valor % 30;
 dias = valor;
 cout << ano <<(" ano(s)") << endl;
 cout << mes <<(" mes(es)") << endl;
 cout << dias <<(" dia(s)") << endl;




}



