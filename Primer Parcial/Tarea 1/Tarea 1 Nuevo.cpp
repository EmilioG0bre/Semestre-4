#include <iostream>
#include <stdio.h>
#include <conio.h>

int main()
{
    int i = 0;
    do
    {
        std::cout << "seleccione una opcion a: las A a 1\nb:Contador de Consonantes\nc:Salir ";
        char opcion;
        std::cin >> opcion;

        switch (opcion)
        {
        case 'a':
        {
            std::cout << "Escriba una frase: ";
            char frase[50];
            char *p;
            gets(frase);
            p = &frase[0];
            while (*p != '\x0')
            {
                if (*p == 'A' || *p == 'a')
                    *p = '1';
                p++;
            }
            std::cout << "La Nueva Frase es: " << frase << "\n";
        }
        break;
        case 'b':
        {
            std::cout << "Escriba una frase: ";
            char frase[50];
            char *p;
            gets(frase);
            p = &frase[0];
            int cont = 0;
            while (*p != '\x0')
            {
                if ((*p >= 65 && *p <= 90) || (*p >= 97 && *p <= 122))
                {
                    if (*p == 'A' || *p == 'a' || *p == 'E' || *p == 'e' || *p == 'I' || *p == 'i' || *p == 'O' || *p == 'o' || *p == 'U' || *p == 'u')
                    {
                        p++;
                    }
                    else
                    {
                        cont++;
                        p++;
                    }
                }
                else
                    p++;
            }
            std::cout << "Hay " << cont << " consonantes\n";
        }
        break;
        case 'c':
        {
            i = 1;
        }
        break;
        default:
            std::cout << "!!!ERROR!!!\nEsa no es una opción válida\n";
            break;
        }
    } while (i == 0);
    system("pause");
    return 0;
}