#pragma once
#include <iostream>

class Cuenta
{
public:
	Cuenta(int);
	void Credit(int);
	void Cargar(int);
	int obtenerSaldo();
private:
	int saldoActual;
};