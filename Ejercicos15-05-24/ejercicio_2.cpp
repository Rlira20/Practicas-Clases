#include <iostream>
using namespace std;
int main()
{
    int edad;
    
    cout << "VERIFICAR SI ES MAYOR DE EDAD O NO. \n";
    cout << "Ingrese su edad: ";
    cin >> edad;
    
    if(edad >= 18){
        cout << "Usted es mayor de edad. \n";
    } else{
        cout << "Usted sigue siendo menor de edad. \n";
    }
    
    cout << "Muchas gracias :)... ";
    
    return 0;
}
