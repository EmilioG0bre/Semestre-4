#include <iostream>

using namespace std;

int main()
{
    int opcion;
    bool repetir = true;

    do
    {

        cout << "Menu de Opciones" << endl;
        cout << "1. Cambiar letra A y a a el nnumero 1" << endl;
        cout << "2. Cuantas conosonantes hay en una cadena" << endl;
        cout << "0. SALIR" << endl;

        cout << "Ingrese una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            char cadena[20],
                DeL[] = "Aa";
            gets(cadena);
            char *Wrd = strtok(cadena, DeL);
            if (Wrd != 0)
            {
                while (Wrd != 0)
                {
                    printf(Wrd);
                    printf("1");
                    Wrd = strtok(0, DeL);
                }
            }

            break;

        case 2:

            break;

        case 0:
            repetir = false;
            break;
        }
    } while (repetir);

    return 0;
}