// Fig. 25.8: Base2.h
// Definici�n de la clase Base2
#ifndef BASE2_H
#define BASE2_H

// definici�n de la clase Base2
class Base2 
{
public:
   Base2( char datosCaracter ) 
   {
      letra = datosCaracter;
   } // fin del constructor de Base2

   char obtenerDatos() const 
   {
      return letra;
   } // fin de la funci�n obtenerDatos
protected: // accesible para las clases derivadas
   char letra; // heredado por la clase derivada
}; // fin de la clase Base2

#endif // BASE2_H


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