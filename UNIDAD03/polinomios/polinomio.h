// polinomio.h - Declaración de la clase CPolinomio
//
#if !defined(_CPOLINOMIO_H_)
#define _CPOLINOMIO_H_

#include <vector>
#include "termino.h" // clases CTermino
using namespace std;

//////////////////////////////////////////////////////////////////
// Clase para manipular ecuaciones algebraicas o polinómicas
// dependientes de dos variables.
class CPolinomio
{
  friend ostream& operator<<(ostream&, CPolinomio&);
  private:
    vector<CTerminoEnXY *> termino; // matriz inicialmente vacía

  public:
    CPolinomio(); // constructor
    CPolinomio(const CPolinomio&); // constructor copia
    ~CPolinomio(); // destructor
    CPolinomio& operator=(const CPolinomio&); // operador =
    size_t ObtenerNroTerminos() const;
    void AsignarTermino(CTerminoEnXY *);
    CPolinomio operator+(CPolinomio&);
    double operator()(double = 1, double = 1);
    operator double();
};
//////////////////////////////////////////////////////////////////	

#endif // _CPOLINOMIO_H_

