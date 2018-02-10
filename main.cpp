#include <iostream>
using std::cout;
using std::cin;

#include "Cuenta.h"

int main()
{
	int saldoInicial;
	cout << "Escriba su saldo inicial: ";
	cin >> saldoInicial;
	Cuenta objeto1(saldoInicial);

	cout << "escriba el monto a acreditar: ";
	int acreditar;
	cin >> acreditar;
	Cuenta objeto2(acreditar);
	objeto2.Credit(acreditar);
	cout << "\nescriba el monto a cargar: ";
	int cargar;
	cin >> cargar;
	objeto2.Cargar(cargar);
	cout << "\nEl saldo actual es: " << objeto2.obtenerSaldo();
	cin.get();
	return 0;
}