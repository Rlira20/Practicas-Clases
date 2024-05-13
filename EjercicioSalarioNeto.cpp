#include <iostream>
using namespace std;
int main()
{
    //nombramos variables.
    float horas, horas2, extras, sueldo, extras2, impuestos, sueldoT;
    string nombre;
    //Se solicita nombre y horas trabajadas al usuario.
    cout << "Ingrese su nombre: ";
    cin >> nombre;
    cout << "Ingrese las horas trabajadas: ";
    cin >> horas;
    
    //Se calcula el sueldo ganado por el trabajdor según las horas trabajadas.
    if(horas <= 160){
        //si trabaja 160 horas o menos, cada hora se pagan $10
        sueldo = horas * 10;
    //Sino si...
    } else if(horas > 160){
        //si trabaja mas de 160 horas, entonces SOLAMENTE las horas extras se pagan $15, las horas normales (160) se pagan $10.
        extras = horas - 160;
        horas2 = horas - extras;
        extras2 = extras * 15;
        sueldo = horas2 * 10 + extras2;
    } 
    //Se le dice al usuario el nombre del trabajador y cuanto es el sueldo que gana en total.
    cout << "El trabajador " << nombre << " gana: $" << sueldo << "\n";
    //Se calcula cuanto va a pagar de impuestos y cuanto será el sueldo que el trabajdor recibirá, descontándole los impuestos.
    if (sueldo <= 2000){
        //Si el trabajador gana menos o igual a $2000, entonces está libre de impuestos.
        cout << "Tu sueldo es libre de impuestos. ";
    } else if (sueldo > 2000, sueldo <=2200){
        //Si el trabajador gana mas de 2000 pero menos de 2200, entonces paga el 20% de impuestos.
        impuestos = sueldo * 0.2;
        sueldoT = sueldo - impuestos;
        cout << "Tu sueldo paga el 20 por ciento de impuestos. Tu sueldo total es de: $" << sueldoT;
    } else if (sueldo > 2200){
        //Si el trabajdor gana mas de 2200, entonces paga el 30% de impuestos.
        impuestos = sueldo * 0.3;
        sueldoT = sueldo - impuestos;
        cout << "Tu sueldo paga el 30 por ciento de impuestos. Tu sueldo total es de: $" << sueldoT ;
    }

    return 0;
}