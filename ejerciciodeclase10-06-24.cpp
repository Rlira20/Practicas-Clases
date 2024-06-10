#include <iostream>
using namespace std;
int main(int argc, char *argv[]){
    int edad;
    int *apuntador = &edad; //Creamos un apuntador a la memoria x
    cout << "Ingrese la edad de la persona: ";
    cin >> *apuntador; //Almacenamos en la memoria el dato

    if (*apuntador >17)
    {
        cout << "La persona es mayor de edad, con "<< edad << " anios. \n";
        cout << "El espacio de memoria de la variable es: " << &apuntador ; 
    }
    else if (*apuntador < 0)
    {
        cout << "Error de datos ingresados.";
    }
    
    else
    {
        cout << "La persona es menor de edad, con "<< edad << " anios. \n";
        cout << "El espacio de memoria de la variable es " << &apuntador ;
    }
    
    
    return 0;
}