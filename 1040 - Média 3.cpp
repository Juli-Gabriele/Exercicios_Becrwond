#include <iostream>
using namespace std;
int main(){
    double n1,n2,n3,n4,media,nota,media2;
    cin >> n1 >> n2 >> n3 >> n4;
    media = ((n1*2 + n2 * 3 + n3 * 4+ n4 *1)/10);
    if(media >= 7){
      cout.precision(1);
      cout . setf(ios::fixed);
      cout << ("Media: ")<< media <<endl;
      cout << ("Aluno aprovado.")<< endl;
    }
    if(media < 5){
      cout.precision(1);
      cout . setf(ios::fixed);
      cout << ("Media: ")<< media <<endl;
      cout << ("Aluno reprovado.")<< endl;
    }
     if((media >= 5)&& (media <= 6.9)){
      cout.precision(1);
      cout . setf(ios::fixed);
      cout << ("Media: ")<< media <<endl;
      cout << ("Aluno em exame")<< endl;
      cin >> nota;
      cout.precision(1);
      cout . setf(ios::fixed);
      cout << ("Nota do exame: ")<< nota << endl;
      media2 = (media + nota)/2;

      if(media >= 5){
        cout << ("Aluno aprovado.")<< endl;
        cout.precision(1);
        cout . setf(ios::fixed);
        cout << ("Media final: ")<< media2 <<endl;
      }
      if (media <= 4.9 ){
        cout << ("Aluno reprovado.")<< endl;
        cout.precision(1);
        cout . setf(ios::fixed);
        cout << ("Media final: ")<< media2 <<endl;

        }

      }

   }



