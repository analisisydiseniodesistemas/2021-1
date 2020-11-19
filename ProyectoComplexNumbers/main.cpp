#include <iostream>
#include "ComplexNumber.hpp"
using namespace std;
ComplexNumber funcion(ComplexNumber x);

ComplexNumber det(ComplexNumber a11,ComplexNumber a12,ComplexNumber a21,ComplexNumber a22);

int main()
{
    cout << "Hello world!" << endl;
    ComplexNumber z1;
    //z1.mRealPart=10.0;
    ComplexNumber z(4.0,3.0);
    std::cout<<z<<"\n";
    std::cout<<"Modulo de z = "<<z.CalculateModulus()<<"\n";
    std::cout<<"Argumento de z = "<<z.CalculateArgument()<<"\n";
    z1=z.CalculatePower(2);
    std::cout<<"z1 = "<<z1<<"\n";
    ComplexNumber z2;
    z2=-z1;
    std::cout<<"z2 = "<<z2<<"\n";
    ComplexNumber zs[2];
    zs[0]=z1;
    zs[1]=z2;
    std::cout<<"El segundo elemento de zs es "<<zs[1]<<"\n";
    ComplexNumber W=funcion(z1);
    std::cout<<W<<"\n";
    ComplexNumber Zr=funcion(z1);
    std::cout<<"El resultado de evaluar la funcion f(x)=x*x+1 para x=z1 es "<<Zr<<std::endl;
    /* ACA Deberán agregar el uso de la función det() para resolver el sistema de ecuaciones*/
    /* EN ESTE CASO, para resolver el sistema de ecuaciones (véase el archivo Problema.docx)*/
    /* DEBERAN UTILIZAR EL MÉTODO CONOCIDO COMO REGLA DE CRAMER PARA RESOLVER EL SISTEMA DE
       ECUACIONES PLANTEADO EN EL ARCHIVO Problema.docx (disponible en el repositorio de github)*/


    return 0;
}/*end main()*/

/**
 *  Calcula el determinate de una matriz de 2 por dos, cuyas entradas/elemntos son
 * números complejos, es decir el determinante de la matriz
 *         |  a11   a12 |
 *     A=  |  a21   a22 |
 * @return: el determinante de la matriz A
 */
//ComplexNumber det(ComplexNumber a11,ComplexNumber a12,ComplexNumber a21,ComplexNumber a22)
//{
//    //ESCRIBA SU CÓDIGO AQUÍ
//}

/**
 * Calcula la función f(x)=x*x+1
*/
ComplexNumber funcion(ComplexNumber x)
{
    ComplexNumber w=x*x;
    ComplexNumber w1(1,0);
    ComplexNumber Result=w+w1;
    return Result;
}





