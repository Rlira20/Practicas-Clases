#include <iostream>
using namespace std;
int main()
{
    float angulo;
    cout << "CALCULAR QUE TIPO DE ANGULO SE TIENE.\n";
    cout << "Ingrese los grados de su angulo: ";
    cin >> angulo;
    
    if(angulo < 90){
        cout << "Su angulo es tipo: agudo. \n";
    } else if(angulo > 90){
        cout << "Su angulo es tipo: obstuso.\n";
    } else {
        cout << "Su angulo es tipo recto. \n";
    }
    
    cout << "Muchas gracias :)..."; 
    
    return 0;
}
