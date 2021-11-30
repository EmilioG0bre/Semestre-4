#include <iostream>
using namespace std;

struct persona
{
    char nombre[60];
    int edad;
    void leer();
    void imprime();

} v1, v2;

void persona::leer()
{
    gets(nombre);
    fflush(stdin);
    cin >> edad;
    fflush(stdin);
}

void persona::imprime()
{
    cout << nombre;
    cout << edad;
}
int main()
{
    // persona V1,V2;
    v1.leer();
    v2.leer();
    v1.imprime();
    v2.imprime();
    system("pause");
    return 0;
}