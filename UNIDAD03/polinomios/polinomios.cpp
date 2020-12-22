// polinomios.cpp - Trabajo con polinomios
//
#include <iostream>                                                                    
#include "polinomio.h"
using namespace std;
bool IntroducirTermino(CTerminoEnXY*&);

int main() // funci\'on principal
{
  CPolinomio PolinomioR, PolinomioB, PolinomioA;
  CTerminoEnXY *txy;
  bool r;

  cout << "Términos del polinomio A\n"
       << "(para finalizar introduzca 0 para el\n"
       << "coeficiente y para los exponentes):\n\n";
  r = IntroducirTermino(txy);
  while (r)
  {
    PolinomioA.AsignarTermino(txy);
    r = IntroducirTermino(txy);
  }

  cout << "Términos del polinomio B\n"
       << "(para finalizar introduzca 0 para el\n"
       << "coeficiente y para los exponentes):\n\n";
  r = IntroducirTermino(txy);
  while (r)
  {
    PolinomioB.AsignarTermino(txy);
    r = IntroducirTermino(txy);
  }

  // Operador + y operador de asignación por omisión
  PolinomioR = PolinomioA + PolinomioB;
  // Constructor copia
  CPolinomio Polinomio = PolinomioR;

  cout << "\nPolinomio A: "; cout << PolinomioA;
  cout << "\nPolinomio B: "; cout << PolinomioB;
  cout << "\nPolinomio R: "; cout << Polinomio;
  cout << endl;
  cout << "valor del polinomio para x = 5, y = 1: "
       << PolinomioR(5, 1) << endl;
  double v = PolinomioR; // valor del polinomio para x = 1 e y = 1
  cout << "valor del polinomio para x = y = 1: " << v << endl;
  
  system("pause");
}

bool IntroducirTermino(CTerminoEnXY*& t)
{         
  double coef;
  int expx, expy;                    
  cout << "Introduce coeficiente:    "; cin >> coef;
  cout << "Introduce exponente de X: "; cin >> expx;
  cout << "Introduce exponente de Y: "; cin >> expy;
  cout << endl;
  if (!coef && !expx && !expy) return false;
  t = new CTerminoEnXY(coef, expx, expy);
  return true;
}

