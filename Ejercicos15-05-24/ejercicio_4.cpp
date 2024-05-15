#include <iostream>
using namespace std;
int main()
{
    float cort1, cort2, par1, par2, lab, proyecto, promedio;
    string nombre;
    
    cout << "Ingrese el nombre del estudiante: ";
    cin >> nombre;
    cout << "Ingrese la nota de corto 1: \n";
    cin >> cort1;
    cout << "Ingrese la nota de corto 2: \n";
    cin >> cort2;
    cout << "Ingrese la nota de parcial 1: \n";
    cin >> par1;
    cout << "Ingrese la nota de parcial 2: \n";
    cin >> par2;
    cout << "Ingrese la nota de laboratorio: \n";
    cin >> lab;
    cout << "Inrese la nota de proyecto: \n";
    cin >> proyecto;
    
    promedio = (cort1 * 0.1) + (cort2 * 0.1) + (par1 * 0.15) + (par2 * 0.2) + (lab * 0.2) + (proyecto * 0.25);
    
    if(promedio >=6){
        cout << "El estudiante " << nombre << " ha logrado pasar la materia, con un promedio de: " << promedio << endl; 
    } else {
        cout << "El estudiante " << nombre << " no logra pasar la materia, obtiene un promedio de: " << promedio << ". MEJORE PARA LA PROXIMA :) \n.";
    }
    
    cout << "Gracias por usar el programa:)...";
    return 0;
}