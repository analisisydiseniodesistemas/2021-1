#ifndef TERMINO_H_INCLUDED
#define TERMINO_H_INCLUDED
class CTermino {
protected:
 float Coeficiente;
 int ExponenteDeX;
 int ExponenteDeY;
public:
 CTermino(float k = 0.0,
          int expx = 0,
          int expy = 0);
 void AsignarCoeficiente(float);
 float ObtenerCoeficiente()const;
 void AsignarExponenteDeX(int);
 int ObtenerExponenteDeX()const;
 void AsignarExponenteDeY(int);
 int ObtenerExponenteDeY()const;
 void VisualizarTermino();
};/*end class CTermino*/

class CTerminoEnX : public virtual CTermino {
private:
 int exponenteDeX;
public:
 CTerminoEnX(double k = 1, int e = 0):
 CTermino(k),exponenteDeX(e){ }
 int ObtenerExponenteDeX(){
   return exponenteDeX;
 }
 void AsignarExponenteDeX(int e){
   exponenteDeX = e;
 }
 CTermino *clonar();
 void mostrar();
};/*end class CTerminoEnX*/

class CTerminoEnY : public virtual CTermino {
private:
 int exponenteDeY;
public:
 CTerminoEnY(double k = 1, int e = 0):
 CTermino(k),exponenteDeY(e){ }
 int ObtenerExponenteDeY(){
   return exponenteDeY;
 }
 void AsignarExponenteDeY(int e){
   exponenteDeY = e;
 }
 CTermino *clonar();
 void mostrar();
};/*end class CTerminoEnY*/
/** Herencia m\'ultiple*/
class CTerminoEnXY :
    public CTerminoEnX, public CTerminoEnY {
public:
CTerminoEnXY(double k = 1,int ex = 0,int ey = 0):
CTermino(k),CTerminoEnX(k,ex),CTerminoEnY(k,ey)
{ }
CTermino *clonar();
void mostrar();
};/*end class CTerminoEnXY*/
#endif // TERMINO_H_INCLUDED
