// Fig. 25.7: Base1.h
// Definición de la clase Base1
#ifndef BASE1_H
#define BASE1_H

// definición de la clase Base1
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
   } // fin de la función obtenerDatos
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
 * investigación y prueba de las teorías y programas para determinar su   *
 * efectividad. Los autores y el editor no hacen ninguna garantía de      *
 * ningún tipo, expresa o implícita, en relación con estos programas o    *
 * con la documentación contenida en estos libros. Los autores y el       *
 * editor no serán responsables en ningún caso por los daños conseguentes *
 * en conexión con, o que surjan de, el suministro, desempeño o uso de    *
 * estos programas.                                                       *
 *************************************************************************/