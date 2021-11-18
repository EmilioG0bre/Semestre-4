#include <iostream>
#include <stdio.h>
#include <cstring>
#include <stdlib.h>

int edad;
char nombre[40];
int registro;
int nomina;
char puesto[40];

void leer1()
{
  std::cout << "Edad: ";
  std::cin >> edad;
  std::cin.ignore();
  std::cout << "Nombre: ";
  gets(nombre);
}
void leer2()
{
  std::cout << "Registro: ";
  std::cin >> registro;
}

void leer3()
{
  std::cout << "Nomina: ";
  std::cin >> nomina;
  std::cout << "Puesto: ";
  gets(puesto);
  gets(puesto);
}
class persona
{
public:
  int edad;
  char nombre[40];
  persona(char *, int);
  void muestra();
  void leer1();
};

class estudiante
{
public:
  int registro;
  estudiante(int);
  void leer2();
  void Imprimir_Datos();
};

class profesor : public persona, public estudiante
{
public:
  int nomina;
  char puesto[40];
  profesor(char *, int, int, char *, int);
  void imprimir_profesor();
  void leer3();
};

persona::persona(char *nombre, int edad)
{
  strcpy(persona::nombre, nombre);
  persona::edad = edad;
}

estudiante::estudiante(int registro)
{
  estudiante::registro = registro;
}
profesor::profesor(char *nombre, int edad, int registro, char *puesto, int nomina) : persona(nombre, edad), estudiante(registro)
{
  strcpy(profesor::puesto, puesto);
  profesor::nomina = nomina;
}

void persona::muestra()
{
  std::cout << "\nLos datos son:";
  std::cout << "\nEdad: ";
  std::cout << edad;
  std::cout << "\nNombre: ";
  std::cout << nombre;
  std::cout << "\n";
}
void estudiante::Imprimir_Datos()
{
  std::cout << "\nLos datos son:";
  std::cout << "\nRegistro: ";
  std::cout << registro;
  std::cout << "\n";
}
void profesor::imprimir_profesor()
{
  std::cout << "\nLos datos son:";
  std::cout << "\nNombre: ";
  std::cout << nombre;
  std::cout << "\nEdad: ";
  std::cout << edad;
  std::cout << "\nRegistro: ";
  std::cout << registro;
  std::cout << "\nPuesto: ";
  std::cout << puesto;
  std::cout << "\nNomina: ";
  std::cout << nomina;
  std::cout << "\n";
}

int main()
{
  char caso = 0;
  do
  {
    std::cout << "\nCase 1: Persona, Case 2: Estudiante, Case 3: Profesor, case 0: Salir\n";
    std::cin >> caso;
    switch (caso)
    {
    case '1':
    {
      leer1();
      persona obP(nombre, edad);
      obP.muestra();
    }
    break;

    case '2':
    {
      leer2();
      estudiante objE(registro);
      objE.Imprimir_Datos();
    }
    break;

    case '3':
    {
      leer3();
      profesor objpo(nombre, edad, registro, puesto, nomina);
      objpo.imprimir_profesor();
    }
    break;
    case '0':
    {
      std::cout << "Saliendo";
      std::cout << "...\n";
    }
    break;
    }
  } while (caso != '0');
  system("pause");
  return 0;
}