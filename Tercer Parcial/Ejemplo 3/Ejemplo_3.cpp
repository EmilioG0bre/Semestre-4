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
    ~persona();
};

class estudiante : public persona
{
public:
    int registro;
    estudiante(int, int, char *);
    void leer2();
    void Imprimir_Datos();
    ~estudiante();
};

class profesor : public estudiante
{
public:
    int nomina;
    char puesto[40];
    profesor(char *, int, int, char *, int);
    void imprimir_profesor();
    void leer3();
    ~profesor();
};

persona::persona(char *nombre, int edad)
{
    strcpy(persona::nombre, nombre);
    persona::edad = edad;
}
persona::~persona()
{
    std::cout << "Destruyendo Objeto...\n";
}

estudiante::estudiante(int registro, int Edad, char *nombre) : persona(nombre, edad)
{
    estudiante::registro = registro;
}
estudiante::~estudiante()
{
    std::cout << "Destruyendo Objeto...\n";
}
profesor::profesor(char *nombre, int edad, int registro, char *puesto, int nomina) : estudiante(registro, edad, nombre)
{
    strcpy(profesor::puesto, puesto);
    profesor::nomina = nomina;
}
profesor::~profesor()
{
    std::cout << "Destruyendo Objeto...\n";
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
    std::cout << "\nEdad: ";
    std::cout << edad;
    std::cout << "\nNombre: ";
    std::cout << nombre;
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
            estudiante objE(registro, edad, nombre);
            objE.Imprimir_Datos();
        }
        break;

        case '3':
        {
            leer3();
            profesor objP(nombre, edad, registro, puesto, nomina);
            objP.imprimir_profesor();
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