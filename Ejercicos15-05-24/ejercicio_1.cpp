#include <iostream>
using namespace std;
int main()
{
    float anguloUno, anguloDos, anguloTres, calculo;
    
    cout << "CALCULAR EL ANGULO RESTANTE DE UN TRIANGULO \n";
    cout << "Ingrese el dato del primer angulo: ";
    cin >> anguloUno;
    cout << "Ingrese el dato del segundo angulo: ";
    cin >> anguloDos;
    
    calculo = anguloDos + anguloUno;
    
    if(calculo >= 180){
        cout << "Los valoes de los angulos no son validos. La suma de los tres angulos tiene que ser 180°. ";
    } else {
        anguloTres = 180 - calculo;
        cout << "El valor del tercer angulo es: " << anguloTres << "° \n" ;
    }
    
    cout << "Muchas gracias por calcular :)... ";
    
    return 0;
}