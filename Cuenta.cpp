#include <iostream>
using std::cout;
using std::cin;

#include "Cuenta.h"

Cuenta::Cuenta(int saldoInicial)
{
	if (saldoInicial >= 0)
	{
		saldoActual = saldoInicial;
	}
	if (saldoInicial < 0)
	{
		saldoInicial = 0;
		cout << "Error el saldo inicial es invalido";
	}
}

void Cuenta::Credit(int acreditar)
{
	saldoActual = saldoActual + acreditar;
}

void Cuenta::Cargar(int cargar)
{
	if (saldoActual > cargar)
	{
		saldoActual = saldoActual - cargar;
	}
	if (saldoActual < cargar)
	{
		cout << "El monto a cargar excede el saldo de la cuenta.";
	}
}

int Cuenta::obtenerSaldo()
{
	cin.get();
	return saldoActual;
}