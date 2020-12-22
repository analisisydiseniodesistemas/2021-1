// termino.cpp - Definición de las clases:
//   CTermino, CTerminoEnX, CTerminoEnY, CTerminoEnXY
//
#include "termino.h"
#include <cmath>                                                                    
#include <iostream>                                                                    
using namespace std;

/////////////////////////////////////////////////////////////////
CTermino *CTerminoEnX::clonar()
{
  return new CTerminoEnX(*this);
}

void CTerminoEnX::mostrar()
{ 
  cout << ((ObtenerCoeficiente() < 0) ? " - " : " + ")
       << fabs(ObtenerCoeficiente());
  if (ObtenerExponenteDeX()) cout << "x^" << ObtenerExponenteDeX();
}

CTermino *CTerminoEnXY::clonar()
{
  return new CTerminoEnXY(*this);
}

void CTerminoEnXY::mostrar()
{
  cout << ((ObtenerCoeficiente() < 0) ? " - " : " + ")
       << fabs(ObtenerCoeficiente());
  if (ObtenerExponenteDeX()) cout << "x^" << ObtenerExponenteDeX();
  if (ObtenerExponenteDeY()) cout << "y^" << ObtenerExponenteDeY();
}
/////////////////////////////////////////////////////////////////

