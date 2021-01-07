// Fig. 25.9: Derivada.h
// Definición de la clase Derivada que hereda
// varias clases base (Base1 y Base2).
#ifndef DERIVADA_H
#define DERIVADA_H

#include <iostream>
using std::ostream;

#include "Base1.h"
#include "Base2.h"

// definición de la clase Derivada
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
 * investigación y prueba de las teorías y programas para determinar su   *
 * efectividad. Los autores y el editor no hacen ninguna garantía de      *
 * ningún tipo, expresa o implícita, en relación con estos programas o    *
 * con la documentación contenida en estos libros. Los autores y el       *
 * editor no serán responsables en ningún caso por los daños conseguentes *
 * en conexión con, o que surjan de, el suministro, desempeño o uso de    *
 * estos programas.                                                       *
 *************************************************************************/