#include <iostream> 
using namespace std;
int main()
{
    int tipoMotor;
    
    cout << "Bienvenido a super bomba. ";
    cout << "Tenemos los diferentes tipos de bombas: \n" << "1 \n" << "2 \n" << "3 \n" << "4 \n";
    cout << "Seleccione que tipo de bomba prefiere: ";
    cin >> tipoMotor;
    
    switch (tipoMotor)
        {
        case 0:
            cout << "No esta establecido un valor definido para el tipo de bomba. \n";
         break;
         
        case 1:
            cout << "La bomba es una bomba de agua. \n";
        break;
        
        case 2:
            cout << "La bomba es una bomba de gasolina. \n";
        break;
        
        case 3:
            cout << "La bomba es una bomba de hormigon. \n";
        break;
        
        case 4:
            cout << "La bomba es una bomba de pasta alimenticia. \n";
        break;

        default:
            cout << "No existe un valor valido para tipo de bomba. ";
        break;
    }
    
    cout << "Muchas gracias :)... ";
    return 0;
}