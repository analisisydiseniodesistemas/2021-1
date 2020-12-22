// polinomio.cpp - Implementación de la clase CPolinomio
//
#include <cmath>
#include "polinomio.h"

/////////////////////////////////////////////////////////////////
// Constructor
CPolinomio::CPolinomio()
{
  termino.reserve(10); // reservar memoria para 10 términos
}

CPolinomio::~CPolinomio()
{
  // Liberar la memoria ocupada por los términos del polinomio
  for (unsigned int i = 0; i < ObtenerNroTerminos(); i++)
    delete termino[i];
}

CPolinomio::CPolinomio(const CPolinomio& pol)
{
  *this = pol; // invoca al operador de asignación
}

CPolinomio& CPolinomio::operator=(const CPolinomio& pol)
{
  // Iniciar a cero el polinomio destino.
  if (ObtenerNroTerminos())
  {
    for (unsigned int i = 0; i < ObtenerNroTerminos(); i++)
      delete termino[i];
    termino.clear();
  }
  // Copiar el polinomio origen en el nuevo destino
  for (unsigned int i = 0; i < pol.ObtenerNroTerminos(); i++)
    termino.push_back(new CTerminoEnXY(*pol.termino[i]));
  return *this;
}

size_t CPolinomio::ObtenerNroTerminos() const
{
  return termino.size();
}

void CPolinomio::AsignarTermino(CTerminoEnXY *t)
{
  // Asigna un término al polinomio colocándolo en orden ascendente
  // de los exponentes.
  if (t->ObtenerCoeficiente() == 0) return;
  double c, coef = t->ObtenerCoeficiente();
  int expx = t->ObtenerExponenteDeX();
  int expy = t->ObtenerExponenteDeY();

  // Insertar un nuevo término.
  int i = ObtenerNroTerminos() - 1;
  while (i >= 0 && expx < termino[i]->ObtenerExponenteDeX())
    i--;
  while (i >= 0 && expx == termino[i]->ObtenerExponenteDeX()
                && expy < termino[i]->ObtenerExponenteDeY())
    i--;

  if (i >= 0 && expx == termino[i]->ObtenerExponenteDeX()
             && expy == termino[i]->ObtenerExponenteDeY())
  {
    c = coef + termino[i]->ObtenerCoeficiente();
    // Término existente. Sumar los coeficientes.
    if (c)
      termino[i]->AsignarCoeficiente(c);
    else
      termino.erase(termino.begin()+i);
  }
  else
    // Insertar un nuevo término.
    termino.insert(termino.begin()+(i+1), t);
}

// Sumar dos polinomios
CPolinomio CPolinomio::operator+(CPolinomio& polB)
{
  int ipa = 0, ipb = 0;
  int na = ObtenerNroTerminos(), nb = polB.ObtenerNroTerminos();
  double coefA, coefB;
  int expxA, expyA, expxB, expyB;
  CPolinomio polR;
  
  // Sumar polA con polB
  while (ipa < na && ipb < nb)
  {
    coefA = termino[ipa]->ObtenerCoeficiente();
    expxA = termino[ipa]->ObtenerExponenteDeX();
    expyA = termino[ipa]->ObtenerExponenteDeY();
    coefB = polB.termino[ipb]->ObtenerCoeficiente();
    expxB = polB.termino[ipb]->ObtenerExponenteDeX();
    expyB = polB.termino[ipb]->ObtenerExponenteDeY();
    if (expxA == expxB && expyA == expyB)
    {
      if (coefA + coefB != 0)
        polR.termino.push_back(new CTerminoEnXY(coefA + coefB,
                                            expxA, expyA));
      ipa++, ipb++;
    }
    else if (expxA < expxB || (expxA == expxB && expyA < expyB))
    {
      polR.termino.push_back(new CTerminoEnXY(coefA, expxA, expyA));
      ipa++;
    }
    else
    {
      polR.termino.push_back(new CTerminoEnXY(coefB, expxB, expyB));
      ipb++;
    }
  }

  // Términos restantes de polA o de polB
  while (ipa < na)
  {
    coefA = termino[ipa]->ObtenerCoeficiente();
    expxA = termino[ipa]->ObtenerExponenteDeX();
    expyA = termino[ipa]->ObtenerExponenteDeY();
    polR.termino.push_back(new CTerminoEnXY(coefA, expxA, expyA));
    ipa++;
  }
  while (ipb < nb)
  {
    coefB = polB.termino[ipb]->ObtenerCoeficiente();
    expxB = polB.termino[ipb]->ObtenerExponenteDeX();
    expyB = polB.termino[ipb]->ObtenerExponenteDeY();
    polR.termino.push_back(new CTerminoEnXY(coefB, expxB, expyB));
    ipb++;
  }
  return polR;
}

// Visualizar los términos de un polinomio.
// Operador de inserción.
ostream& operator<<(ostream& os, CPolinomio& polX)
{
  int i = polX.ObtenerNroTerminos();
  while (i--)
    polX.termino[i]->mostrar();
  return os;
}

// Operador llamada a función
double CPolinomio::operator()(double x, double y)
{
  double v = 0;
  for (unsigned int i = 0; i < ObtenerNroTerminos(); i++)
    v += termino[i]->ObtenerCoeficiente() *
         pow(x, termino[i]->ObtenerExponenteDeX()) *
         pow(y, termino[i]->ObtenerExponenteDeY());
  return v;
}

// Operador de conversión de CPolinomio a double
CPolinomio::operator double()
{
  return (*this)(); // invoca al operador ()
}
/////////////////////////////////////////////////////////////////

