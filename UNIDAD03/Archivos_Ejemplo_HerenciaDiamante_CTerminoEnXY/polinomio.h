// polinomio.h - Declaraci\'on de la clase
// CPolinomio
//
#if !defined(_CPOLINOMIO_H_)
#define _CPOLINOMIO_H_
#include <fstream>
#include <vector>
#include "termino.h" // clases CTermino
using namespace std;

//////////////////////////////////////////////////////////////////
// Clase para manipular ecuaciones algebraicas o
// polin\'omicas dependientes de dos variables.
class CPolinomio
{
 friend ostream& operator<<(
                 ostream&, CPolinomio&);
private:
 vector<CTermino *> termino;// matriz
                        //inicialmente vac\'ia
public:
 CPolinomio(); // constructor
 CPolinomio(const CPolinomio&); // constructor copia
 ~CPolinomio(); // destructor
 CPolinomio& operator=(const CPolinomio&); // operador =
 size_t ObtenerNroTerminos() const;
 void AsignarTermino(CTermino);
 CPolinomio operator+(CPolinomio&);
 double operator()(double = 1, double = 1);
 operator double();
};
//////////////////////////////////////////////////////////////////

#endif // _CPOLINOMIO_H_

