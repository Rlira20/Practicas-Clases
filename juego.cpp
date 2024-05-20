#include<iostream>
//genera los números aleatorios.
#include <cstdlib>
//inicia la semilla de generación de números aleatorios.
#include <ctime>
using namespace std;

//asignamos una función en donde no nos devuelva ningún valor.
void mostrarMenu() {
    cout << "Piedra, Papel o Tijeras. \n";
    cout << "1. Piedra. \n" << "2. Papel. \n" << "3. Tijeras. \n" << "0. Salir. \n";
    cout << "Ingrese su selección: ";
}

//asignamos una función que convierta los números enteros en alfanuméricos. Según la elección del usuario, se convertirá en texto
string obtenerEleccion (int eleccion) {
    switch(eleccion) {
    case 1:
        return "Piedra";
    case 2:
        return "Papel";
    case 3:
        return "Tijera";
    default:
        return "";
    }
}
//Función principal que ejecutará el juego.
int main()
{
    srand(static_cast<unsigned int>(time(0)));//inicia la semilla del generador de números aleatorios.
    //DECLARAMOS VARIABLES.
    int usuarioEleccion, contadorGanadas = 0, contadorPerdidas = 0, contadorEmpates = 0, jugardeNuevo = 1;//jugardeNuevo incia en 1 para entrar en bucle para que el usuario juegue de nuevo

    while(jugardeNuevo = 1) {
        mostrarMenu(); //llamamos a la función del menú para que se muestre.
        cin>> usuarioEleccion;

        if (usuarioEleccion == 0) {
            break;
        }

        if (usuarioEleccion < 1 || usuarioEleccion > 3) {
            cout << "Elección inválida. Inténtelo de nuevo." << endl;
            continue;
        }

        int computadoraEleccion = rand() %3 + 1; // genera la elección aleatoria de la computadora para poder jugar contra el usuario.

        cout << "Usted eligió: " << obtenerEleccion(usuarioEleccion) << ". \n Su contrincante eligió: " << obtenerEleccion (computadoraEleccion) << endl;


        //se escoge al ganador.
        if(usuarioEleccion == computadoraEleccion) {
            cout << "Han quedado en empate \n";
            contadorEmpates++;
        } else if ((usuarioEleccion == 1 && computadoraEleccion == 3) ||
                   (usuarioEleccion == 2 && computadoraEleccion == 1) ||
                   (usuarioEleccion == 3 && computadoraEleccion == 2)) {
            cout << "Usted ha ganado :D \n";
            contadorGanadas++;
        } else {
            cout << "Su contrincante ha ganado:( \n";
            contadorPerdidas++;
        }

        cout << "¿Desea jugar de nuevo? (1 para Sí, 0 para No): " << endl;
        cin >> jugardeNuevo;
        
        if (jugardeNuevo == 0) {
            break;
        }
    }

    cout << "Fin del juego, muchas gracias por jugar :) \n";
    cout << "Estadisticas de tu juego: \n";
    cout << "veces ganadas: " << contadorGanadas << endl;
    cout << "Veces perdidas: " << contadorPerdidas << endl;
    cout << "Empates: " << contadorEmpates<< endl;

    return 0;
}