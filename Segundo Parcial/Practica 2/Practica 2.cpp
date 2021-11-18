#include <iostream>
#include <stdio.h>
#include <cstring>
#include <stdlib.h>
float sueldo;
char puesto[40];
char nombre[60];
void leer()
{
    std::cout << "sueldo: ";
    std::cin >> sueldo;
    std::cout << "puesto: ";
    gets(puesto);
    gets(puesto);
    std::cout << "nombre: ";
    gets(nombre);
}
void leer1()
{
    std::cout << "sueldo: ";
    std::cin >> sueldo;
    std::cout << "nombre: ";
    gets(nombre);
    gets(nombre);
}
class empleado
{
public:
    float sueldo;
    char puesto[40];
    char nombre[60];
    empleado(){};
    empleado(float, char *, char *);
    empleado(float, char *);
    void muestra();
    void muestra1();
    ~empleado();
};      
empleado::empleado(float sueldo, char *puesto, char *nombre)
{
    empleado::sueldo = sueldo;
    strcpy(empleado::puesto, puesto);
    strcpy(empleado::nombre, nombre);
}
empleado::empleado(float sueldo, char *nombre)
{
    empleado::sueldo = sueldo;
    strcpy(empleado::nombre, nombre);
}
empleado::~empleado()
{
    std::cout << "Destruyendo objeto";
    _sleep(500);
    std::cout << ".";
    _sleep(500);
    std::cout << ".";
    _sleep(500);
    std::cout << ".";
}
void empleado::muestra()
{
    std::cout << sueldo << "\n";
    std::cout << nombre << "\n";
    std::cout << puesto << "\n";
}
void empleado::muestra1()
{
    std::cout << sueldo << "\n";
    std::cout << nombre << "\n";
}
int main()
{
    char caso = 0;
    do
    {
        std::cout << "\ncase a: 3 objetos, case b: 2 objetos, case s: Salir\n";
        std::cin >> caso;
        switch (caso)
        {
        case 'a':
        {
            leer();
            empleado obj1(sueldo, puesto, nombre);
            obj1.muestra();
        }
        break;

        case 'b':
        {
            leer1();
            empleado obj2(sueldo, nombre);
            obj2.muestra1();
        }
        break;

        case 's':
        {
            std::cout << "Saliendo";
            _sleep(1000);
            std::cout << ".";
            _sleep(1000);
            std::cout << ".";
            _sleep(1000);
            std::cout << ".\n";
        }
        break;
        }
    } while (caso != 's');
    system("pause");
    return 0;
}