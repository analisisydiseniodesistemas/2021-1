/**
 * leyOhm.cpp
 */
 #include <iostream>
 using namespace std;

 int vecesLeyOhm = 0; /** Veces que se ha
                          llamado a este
                          m\'odulo */

void calculoVoltaje(void)
{
  float voltaje;
  float intensidad;
  float resistencia;

  static int vecesVol = 0; /**Veces que se ha
                              calculado voltaje*/
  /**ESCRIBA SU CODIGO AQUI*/
  //Deber\'an solicitar al usuario los valores de
  //resistencia e intensidad; y deber\'an calcular
  //el voltaje y mostrar el resultado.
  cout<<"Llamadas al m\\'odulo: "<<vecesLeyOhm
      <<" para voltaje "<<vecesVol<<endl;
}

void calculoIntensidad(void)
{
  float voltaje;
  float intensidad;
  float resistencia;

  static int vecesInt = 0; /**Veces que se ha
                              calculado intensidad*/
  /**ESCRIBA SU CODIGO AQUI*/
  //Deber\'an solicitar al usuario los valores de
  //resistencia y voltaje; y deber\'an calcular
  //la intensidad y mostrar el resultado.
  cout<<"Llamadas al m\\'odulo: "<<vecesLeyOhm
      <<" para intensidad "<<vecesInt<<endl;
}

void calculoResistencia(void)
{
  float voltaje;
  float intensidad;
  float resistencia;

  static int vecesRes = 0; /**Veces que se ha
                              calculado resistencia*/
  /**ESCRIBA SU CODIGO AQUI*/
  //Deber\'an solicitar al usuario los valores de
  //intensidad y voltaje; y deber\'an calcular
  //la resistencia y mostrar el resultado.
  cout<<"Llamadas al m\\'odulo: "<<vecesLeyOhm
      <<" para intensidad "<<vecesRes<<endl;
}

