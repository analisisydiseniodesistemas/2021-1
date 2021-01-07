// Fig. 25.7: Base1.h
// Definici�n de la clase Base1
#ifndef BASE1_H
#define BASE1_H

// definici�n de la clase Base1
class Base1 
{
public:
   Base1( int valorParametro ) 
   {
      valor = valorParametro;
   } // fin del constructor de Base1

   int obtenerDatos() const 
   {
      return valor;
   } // fin de la funci�n obtenerDatos
protected: // accesible para las clases derivadas
   int valor; // heredado por la clase derivada
}; // fin de la clase Base1

#endif // BASE1_H


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