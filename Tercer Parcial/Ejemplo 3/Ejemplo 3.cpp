#include <iostream>
#include <stdio.h>
#include <cstring>
#include <stdlib.h>

int edad;
char nombre[40];
int registro;

void leer1_P()
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
    std::cin.ignore();
}

class persona
{
public:
    int edad;
    char nombre[40];
    persona(char *, int);
    void muestra();
    void leer1_P();
};

class estudiante : public persona
{
public:
    int registro;
    estudiante(int, int, char *);
    void leer2();
    void Imprimir_Datos();
};

persona::persona(char *nombre, int edad)
{
    strcpy(persona::nombre, nombre);
    persona::edad = edad;
}

estudiante::estudiante(int registro, int edad, char *nombre) : persona(nombre, edad)
{
    estudiante::registro = registro;
    estudiante::edad = edad;
    strcpy(estudiante::nombre, nombre);
}

void persona::muestra()
{
    std::cout << "Los datos son:";
    std::cout << "\nEdad: ";
    std::cout << edad;
    std::cout << "\nNombre: ";
    std::cout << nombre;
}
void estudiante::Imprimir_Datos()
{
    std::cout << "Los datos son:";
    std::cout << "\nRegistro: ";
    std::cout << registro;
    std::cout << "\nEdad: ";
    std::cout << edad;
    std::cout << "\nNombre: ";
    std::cout << nombre;
}

int main()
{
    char caso = 0;
    do
    {
        std::cout << "\nCase 1: Persona, Case 2: Estudiante, case 0: Salir\n";
        std::cin >> caso;
        switch (caso)
        {
        case '1':
        {
            leer1_P();
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