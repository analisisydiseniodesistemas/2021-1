// cuenta.h - clase CCuenta
// Clase base de CCuentaAhorro y CCuentaCorriente
#if !defined( _CUENTA_H_ )
#define _CUENTA_H_
#include <string>

class CCuenta
{
  // Atributos
  private:
    std::string nombre;
    std::string cuenta;
    double saldo;
    double tipoDeInteres;

  // M�todos
  public:
    CCuenta(std::string nom = "sin nombre", std::string cue = "0000",
            double sal = 0.0, double tipo = 0.0);
    virtual ~CCuenta() {}
    CCuenta(const CCuenta&);
    CCuenta& operator=(const CCuenta&);
    bool asignarNombre(std::string nom);
    std::string obtenerNombre() const;
    bool asignarCuenta(std::string cue);
    std::string obtenerCuenta() const;
    double estado() const;
    virtual void comisiones();
    virtual double intereses();
    bool ingreso(double cantidad);
    void reintegro(double cantidad);
    double obtenerTipoDeInteres() const;
    bool asignarTipoDeInteres(double tipo);
};

#endif // _CUENTA_H_

