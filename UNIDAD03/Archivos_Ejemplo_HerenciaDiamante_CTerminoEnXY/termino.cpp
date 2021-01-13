#include <cmath>
#include <iostream>
using namespace std;
#include "termino.h"

void CTermino::VisualizarTermino()
{
cout<<((ObtenerCoeficiente() < 0)?" - " : " + ")
    << fabs(ObtenerCoeficiente());
  if (ObtenerExponenteDeX())
    cout << "x^" << ObtenerExponenteDeX();
  if (ObtenerExponenteDeY())
    cout << "y^" << ObtenerExponenteDeY();
}

CTermino::CTermino(float coef,
                   int expx,
                   int expy):
Coeficiente(coef),ExponenteDeX(expx),
ExponenteDeY(expy){ }

void CTermino::AsignarCoeficiente(float coef){
 Coeficiente = coef;
}
float CTermino::ObtenerCoeficiente()const{
 return Coeficiente;
}
void CTermino::AsignarExponenteDeX(int exp){
 ExponenteDeX = exp;
}
int CTermino::ObtenerExponenteDeX()const{
 return ExponenteDeX;
}
void CTermino::AsignarExponenteDeY(int exp){
 ExponenteDeY = exp;
}
int CTermino::ObtenerExponenteDeY()const{
 return ExponenteDeY;
}
