#include <iostream>
using namespace std;
int main()
{
  
    //Ejercico de menu do while
    char opcion = ' ';
   cout << "Ingrese la letra X para continuar a la seccion del menu: ";
   cin >> opcion;
   
   do{
       if (opcion == 'X' || opcion == 'x'){
           cout << "Menu: \n";
           cout << "1. Espaggeti. \n";
           cout << "2. Carne asasda. \n";
           cout << "3. Torta mexicana. \n";
           cout << "4. Res en salsa. \n";
           cout << "5. Costilla de cerdo. \n";
           cout << "Seleccione X para salir del menu \n";
       }
       cout << "Seleccione una opcion: ";
       cin << opcion;
       cout << "Ha seleccionado: " << opcion << endl;
   } while (true)

    return 0;
}