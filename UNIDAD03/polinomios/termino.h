// termino.h - Declaración de las clases:
// CTermino, CTerminoEnX, CTerminoEnY, CTerminoEnXY
//
#if !defined( _TERMINO_H_ )
#define _TERMINO_H_

/////////////////////////////////////////////////////////////////
class CTermino  // clase base
{
  private:
    double coeficiente;
  public:
    // Constructor
    CTermino(double k = 1) : coeficiente(k) {}
    virtual ~CTermino() {}
    double ObtenerCoeficiente() { return coeficiente; }
    void AsignarCoeficiente(double coef = 1){ coeficiente = coef; };
    virtual CTermino *clonar() = 0;
    virtual void mostrar() = 0;
};

class CTerminoEnX : public virtual CTermino
{
  private:
    int exponenteDeX;
  public:
    // Constructor
    CTerminoEnX(double k = 1, int e = 0) : 
    CTermino(k), exponenteDeX(e) {}
    int ObtenerExponenteDeX() { return exponenteDeX; }
    void AsignarExponenteDeX(int e = 0){ exponenteDeX = e; };
    CTermino *clonar();
    void mostrar();
};

class CTerminoEnY : public virtual CTermino
{
  private:
    int exponenteDeY;
  public:
    // Constructor
    CTerminoEnY(double k = 1, int e = 0) :
    CTermino(k), exponenteDeY(e) {}
    int ObtenerExponenteDeY() { return exponenteDeY; }
    void AsignarExponenteDeY(int e = 0){ exponenteDeY = e; };
};

class CTerminoEnXY : public CTerminoEnX, public CTerminoEnY
{
  public:
    // Constructor
    CTerminoEnXY(double k = 1, int ex = 0, int ey = 0) : 
    CTermino(k), CTerminoEnX(k, ex), CTerminoEnY(k, ey) {}
    CTermino *clonar();
    void mostrar();
};
//////////////////////////////////////////////////////////////////

#endif // _TERMINO_H_

