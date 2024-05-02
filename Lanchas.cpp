#include "Lanchas.h"
using namespace std;

int Lanchas::getVelocidad() {
	return velocidad;
}

void Lanchas::setVelocidad(int pVelocidad) {
	velocidad = pVelocidad;
}

//Get Set
int Lanchas::getdistancia() {
	return distancia;
}

void Lanchas::setdistancia(int pdistancia) {
	distancia = pdistancia;
}

int Lanchas::getnitro() {
	return nitro;
}

void Lanchas::setnitro(int pnitro) {
	nitro = pnitro;
}

string Lanchas::getNombre() {
	return Nombre;
}

void Lanchas::setNombre(string pNombre) {
	Nombre = pNombre;
}

Lanchas::Lanchas() {}

Lanchas::Lanchas(int pvelocidad, int pdistancia, int pnitro, string pNombre) {
	velocidad = pvelocidad;
	distancia = pdistancia;
	nitro = pnitro;
	Nombre = pNombre;
}

void Lanchas::LanzarDado() {
	int puntos = rand() % 6 + 1;
	velocidad += puntos;

}

void Lanchas::calcularNitro() {
	if (nitro > 0) {
		cout << "¿Quieres usar el Nitro? S/N: ";
		string res;
		cin >> res;
		if (res == "S") {
			int usarNitro = rand() % 2; // Generar un número aleatorio para decidir si se utiliza el nitro
			if (usarNitro == 1) {
				velocidad *= 2;
				cout << " y usa nitro y aumenta la velocidad (+" << velocidad << ")!";
			}
			else {
				velocidad /= 2;
				cout << " y usa nitro y explota el nitro y disminuye la velocidad (+" << velocidad << ")!";
			}
			nitro--;
		}
	}
}

void Lanchas::calcularDistancia() {
	distancia = distancia + velocidad * 100;

	cout << Nombre << " Avanza a la posicion " << distancia << endl;
}