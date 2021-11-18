#include <iostream>

int suma(int &a, int &b); //Se configura desde raiz con el signo &
int main()
{
    int x = 0, y = 0, r = 0;
    std::cout << "Introduce 2 valores:\n";
    std::cin >> x >> y;
    r = suma(x, y);
    std::cout << r << "\n";
    return 0;
}
int suma(int &a, int &b)
{
    a = a + b;
    return a;
}
/*
█░█
▀█▀
░▀░
*/