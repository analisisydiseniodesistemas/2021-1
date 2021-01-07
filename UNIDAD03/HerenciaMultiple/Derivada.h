// Fig. 25.9: Derivada.h
// Definici�n de la clase Derivada que hereda
// varias clases base (Base1 y Base2).
#ifndef DERIVADA_H
#define DERIVADA_H

#include <iostream>
using std::ostream;

#include "Base1.h"
#include "Base2.h"

// definici�n de la clase Derivada
class Derivada : public Base1, public Base2 
{
   friend ostream &operator<<( ostream &, const Derivada & );
public:
   Derivada( int, char, double );
   double obtenerReal() const;
private:
   double real; // datos privados de la clase derivada
}; // fin de la clase Derivada

#endif // DERIVADA_H


/**************************************************************************
 * (C) Copyright 1992-2007 por Deitel & Associates, Inc. y                *
 * Pearson Education, Inc. Todos los derechos reservados.                 *
 *                                                                        *
 * RENUNCIA: Los autores y el editor de este libro han realizado su mejor *
 * esfuerzo para preparar este libro. Esto incluye el desarrollo, la      *
 * investigaci�n y prueba de las teor�as y programas para determinar su   *
 * efectividad. Los autores y el editor no hacen ninguna garant�a de      *
 * ning�n tipo, expresa o impl�cita, en relaci�n con estos programas o    *
 * con la documentaci�n contenida en estos libros. Los autores y el       *
 * editor no ser�n responsables en ning�n caso por los da�os conseguentes *
 * en conexi�n con, o que surjan de, el suministro, desempe�o o uso de    *
 * estos programas.                                                       *
 *************************************************************************/