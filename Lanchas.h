#pragma once
#include <iostream>
using namespace std;

class Lanchas
{
private:
	int velocidad;
	int distancia;
	int nitro;

	string Nombre;
public:
	int getVelocidad();
	void setVelocidad(int pVelocidad);
	int getdistancia();
	void setdistancia(int pDistancia);
	int getnitro();
	void setnitro(int pNitro);
	string getNombre();
	void setNombre(string pNombre);
	bool nitroActivoLancha1 = true;
	bool nitroActivoLancha2 = true;
	//Get y Set
	Lanchas();
	Lanchas(int pvelocidad, int pdistancia, int pnitro, string pNombre);
	void LanzarDado();
	//Calcular Nitro
	void calcularNitro();
	void calcularDistancia();



	//Calcular Distancia
};

