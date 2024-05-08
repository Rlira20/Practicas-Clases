
#include <iostream>
using namespace std;
int main()
{
    //Ejercico de menu
    
    char opcion = '   ';
    cout << "Ingrese la letra X para continuar a la seccion del menu: ";
    cin >> opcion;
    while (true)
    {
        if (opcion == 'X' || opcion == 'x')
        {
            cout << "menu: \n";
            cout << "1. Hamburguesa suprema. \n";
            cout << "2. Pollo a la parrilla. \n";
            cout << "3. Carne asada. \n";
            cout << "4. rollitos de queso \n";
            cout << "5. Pollo rostizado. \n";
            cout << "Seleccione X para salir del menu. \n";
        }

        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case '1':
            cout << "Ha seleccionado: Hamburguesa suprema. \n";
            break;

        case '2':
            cout << "Ha seleccionado: Pollo a la parrilla. \n";
            break;

        case '3':
            cout << "Ha seleccionado: Carne asada \n";
            break;

        case '4':
            cout << "Ha seleccionado: Rollitos de queso. \n";
            break;

        case '5':
            cout << "Ha seleccionado: Pollo rostizado. \n";
            break;

        case 'X':
        case 'x':
            cout << "Saliendo del menu... \n";
            break;

        default:
            cout << "Opcion no valioda, seleccione nuevamente \n";
            break;
        }

        if (opcion == 'X' || opcion == 'x')
        {
            break;
        }
    }
    return 0;
}