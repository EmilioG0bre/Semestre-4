#include <iostream>
#include <stdio.h>
using namespace std;

class persona
{
public:
	char nombre[50];
	int edad;
	char domicilio[60];
	void leer();
	void muestra();
} Pedro, Juan;

void persona::leer()
{
	cout << "Introduzca los valores: ";
	cout << "\n Nombre: ";
	gets_s(nombre, 50);
	gets_s(nombre, 50);
	cout << "\n Edad: ";
	cin >> edad;
	cout << "\n Domicilio: ";
	gets_s(domicilio, 60);
	gets_s(domicilio, 60);
}

void persona::muestra()
{
	cout << "\n Valores: ";
	cout << "\n Nombre: " << nombre;
	cout << "\n Edad: " << edad;
	cout << " \n Domicilio: " << domicilio;
}
int main()
{
	int caso = 0;
	while (caso != 2)
	{
		cout << "\n caso 0: Pedro, Caso 1: Juan, Caso 2: Exit" << endl;
		cin >> caso;
		switch (caso)
		{
		case 0:
		{
			Pedro.leer();
			Pedro.muestra();
			break;
		}
		case 1:
		{
			Juan.leer();
			Juan.muestra();
			break;
		}
		case 2:
		{
			cout << "Saliendo..." << endl;
			break;
		}
		}
	}
	return 0;
}