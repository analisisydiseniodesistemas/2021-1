/** main.cpp - Programa modular que calcula
 la Ley de ohm.
 */
#include <iostream>
using namespace std;
/**
Prototipos de funciones que se importan
*/
void calculoVoltaje(void);
void calculoIntensidad(void);
void calculoResistencia(void);

int main(void)
{
  char eleccion; /** Elecci\'on del usuario*/

  do
  {
    /* Lectura de la operaci\'on a realizar */
    cout<<"Elija la forma de la ley de Ohm que "
        <<"corresponda:"<<endl;
    cout<<"A] Voltaje B] Intensidad C] Resistencia "
        <<"S] Salir"<<endl;
    cout<<"Su eleccion (A, B, C, o S) => ";
    cin>>eleccion;

    switch(eleccion){
      case 'A':{
        calculoVoltaje();
        break;
      }
      case 'B':{
        calculoIntensidad();
        break;
      }
      case 'C':{
        calculoResistencia();
        break;
      }
      default:{
        cout<<"Operaci\\'on no v\\'alida"<<endl;
        break;
      }
    } /*fin del switch*/
  }while(eleccion != 'S');
  return 0;
}
