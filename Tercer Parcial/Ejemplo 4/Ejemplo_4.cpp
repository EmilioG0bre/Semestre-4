#include <iostream>
#include <stdio.h>
#include <cstring>
#include <stdlib.h>

int edad;
char nombre[40];
int registro;
int nomina;
char puesto[40];
void leer(int ban)
{
    if (ban == 0)
    {
        std::cout << "Registro: ";
        std::cin >> registro;
    }
    else if (ban == 1)
    {
        std::cout << "Nomina: ";
        std::cin >> nomina;
        std::cout << "Puesto: ";
        gets(puesto);
        gets(puesto);
    }
    else
    {
        std::cout << "Edad: ";
        std::cin >> edad;
        std::cin.ignore();
        std::cout << "Nombre: ";
        gets(nombre);
    }
}
class persona
{
public:
    int edad;
    char nombre[40];
    persona(char *, int);
    persona(char *);
    void muestra();
    void leer1();
    ~persona();
};

class estudiante : public persona
{
public:
    int registro;
    estudiante(int, int, char *);
    estudiante(int, char *);
    ~estudiante();
    void Imprimir_Datos();
};

class profesor : public estudiante
{
public:
    int nomina;
    char puesto[40];
    profesor(char *, int, int, char *, int);
    ~profesor();
    void imprimir_profesor();
};

persona::persona(char *nombre, int edad)
{
    strcpy(persona::nombre, nombre);
    persona::edad = edad;
}
persona::persona(char *nombre)
{
    strcpy(persona::nombre, nombre);
}
persona::~persona()
{
    std::cout << "Destruyendo Objeto...\n";
}

estudiante::estudiante(int registro, int edad, char *nombre) : persona(nombre, edad)
{
    estudiante::registro = registro;
}
estudiante::estudiante(int registro, char *nombre) : persona(nombre)
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
    std::cout << "\n";
}
void profesor::imprimir_profesor()
{
    std::cout << "\nLos datos son:";
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
            leer(3);
            persona obP(nombre, edad);
            obP.muestra();
        }
        break;

        case '2':
        {
            leer(0);
            estudiante objE(registro, edad, nombre);
            objE.Imprimir_Datos();
        }
        break;

        case '3':
        {
            leer(1);
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