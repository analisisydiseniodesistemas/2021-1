/** 01polinomios.cpp - programa que utilizanzo
 * las clases CTermino y CPolinomio, lee dos
 * polinomios, visualiza estos polinomios as\'i
 * como el polinomio suma de ambos y tambi\'en
 * visualiza el valor del polinomio para x=5 e
 * y=1 y para x=1 e y=1.
 */
#include <iostream>
using namespace std;
#include "polinomio.h"
bool IntroducirTermino(CTermino&);
int main(){
 CPolinomio PolinomioA, PolinomioB, PolinomioR;
 CTerminoEnXY tx;
 bool r;
 cout<<"T\\'erminos del polinomio A\n"
     <<"(para finalizar introduzca 0 para el\n"
     <<"coeficiente y para los exponentes):\n\n";
 r = IntroducirTermino(tx);
 while(r){
   PolinomioA.AsignarTermino(&tx);// duplica tx
   r = IntroducirTermino(tx);
 }
 cout<<"T\\'erminos del polinomio B\n"
     <<"(para finalizar introduzca 0 para el\n"
     <<"coeficiente y para los exponentes):\n\n";
 r = IntroducirTermino(tx);
 while(r){
   PolinomioB.AsignarTermino(&tx);// duplica tx
   r = IntroducirTermino(tx);
 }
 // Operador + y operador de asignac\'on por
 // omisi\'on
 PolinomioR = PolinomioA + PolinomioB;
 // Construtor copia
 CPolinomio Polinomio = PolinomioR;
 cout << "\nPolinomio A: ";
 cout << PolinomioA;
 cout << "\nPolinomio B: ";
 cout << PolinomioB;
 cout << "\nPolinomio R: ";
 cout << Polinomio;
 cout << endl;
 cout<<"valor del polinomio para x = 5, y = 1: "
     << PolinomioR(5,1) << endl;
 double v = PolinomioR;//valor del polinomio
                       //para x = 1 e y = 1
 cout << "valor del polinomio para x = y = 1"
      << v << endl;
 return 0;
}/*end main()*/

bool IntroducirTermino(CTermino& t){
 float coef;
 int expx, expy;
 cout<<"Introduce coeficiente:    ";
 cin>>coef;
 cout<<"Introduce exponente de X: ";
 cin>>expx;
 cout<<"Introduce exponente de Y: ";
 cin>>expy;
 if (!coef && !expx && !expy) return false;
 t = CTerminoEnXY(coef,expx,expy);
 return true;
}


