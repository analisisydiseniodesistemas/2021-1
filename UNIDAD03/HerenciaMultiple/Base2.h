// Fig. 25.8: Base2.h
// Definición de la clase Base2
#ifndef BASE2_H
#define BASE2_H

// definición de la clase Base2
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
   } // fin de la función obtenerDatos
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
 * investigación y prueba de las teorías y programas para determinar su   *
 * efectividad. Los autores y el editor no hacen ninguna garantía de      *
 * ningún tipo, expresa o implícita, en relación con estos programas o    *
 * con la documentación contenida en estos libros. Los autores y el       *
 * editor no serán responsables en ningún caso por los daños conseguentes *
 * en conexión con, o que surjan de, el suministro, desempeño o uso de    *
 * estos programas.                                                       *
 *************************************************************************/