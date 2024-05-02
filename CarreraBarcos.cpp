// Barco.cpp : Define las funciones de la biblioteca estática.
//

#include <iostream>
//#include <cstdlib>
//#include <ctime>
//#include "framework.h"

#include "Lanchas.h"

using namespace std;

// TODO: Ejemplo de una función de biblioteca

int main() {
    // Inicialización de la semilla para los números aleatorios
    srand(time(nullptr));


    Lanchas lancha1 = Lanchas(0, 0, 1, "Lancha 1");
    Lanchas lancha2 = Lanchas(0, 0, 1, "Lancha 2");

    for (int turno = 1; turno <= 5; turno++) {
        cout << "Turno " << turno << ":" << endl;
        cout << "Lancha 1: ";
        lancha1.LanzarDado();
        lancha1.calcularNitro();
        lancha1.calcularDistancia();
        cout << "Turno " << turno << ":" << endl;
        cout << "Lancha 2: ";
        lancha2.LanzarDado();
        lancha2.calcularNitro();
        lancha2.calcularDistancia();
    }

    if (lancha1.getdistancia() > lancha2.getdistancia()) {
        cout << "¡Lancha 1 ha ganado!" << endl;
    }
    else if (lancha1.getdistancia() < lancha2.getdistancia()) {
        cout << "¡Lancha 2 ha ganado!" << endl;
    }
    else {
        cout << "¡Es un empate!" << endl;
    }

    return 0;
}
