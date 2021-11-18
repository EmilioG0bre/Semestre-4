/* 
A- Crear y mostrar 1 objeto de la clase Articulo (Base) ( Descripción, Costo) 
B- Crear y mostrar 1 objeto de la clase Heredada Venta ( Vta_Total + Clase Base) 
S- Salir
 */
#include <iostream>
#include <stdio.h>
#include <cstring>
#include <stdlib.h>

int costo;
char descripcion[40];
int vta_total;
char rfc[40];

void leer1()
{
  std::cout << "Artículo: ";
  gets(descripcion);
  gets(descripcion);
  std::cout << "Costo: ";
  std::cin >> costo;
}
void leer2()
{
  std::cout << "Venta Total: ";
  std::cin >> vta_total;
  std::cin.ignore();
}
void leer3()
{
  std::cout << "factura: ";
  gets(rfc);
  gets(rfc);
}
class articulo
{
public:
  char descripcion[40];
  int costo;
  articulo(char *, int);
  void muestra();
  void leer1();
  ~articulo();
};

class venta
{
public:
  int vta_total;
  venta(int);
  void leer2();
  void Imprimir_Datos();
  ~venta();
};
class factura : public articulo, public venta
{
public:
  char rfc[40];
  factura(char *, int, int, char *);
  void imprimir_factura();
  void leer3();
  ~factura();
};

articulo::articulo(char *descripcion, int costo)
{
  strcpy(articulo::descripcion, descripcion);
  articulo::costo = costo;
}

venta::venta(int vta_total)
{
  venta::vta_total = vta_total;
}
factura::factura(char *descripcion, int costo, int vta_total, char *rfc) : articulo(descripcion, costo), venta(vta_total)
{
  strcpy(factura::rfc, rfc);
}
articulo::~articulo()
{
  std::cout << "\nDestruyendo objeto...\n";
}
venta::~venta()
{
  std::cout << "\nDestruyendo objeto...\n";
}
factura::~factura()
{
  std::cout << "\nDestruyendo objeto...\n";
}

void articulo::muestra()
{
  std::cout << "\nLos datos son:";
  std::cout << "\nDescripcion: ";
  std::cout << descripcion;
  std::cout << "\nCosto: ";
  std::cout << costo;
  std::cout << "\n";
}
void venta::Imprimir_Datos()
{
  std::cout << "\nLos datos son:";
  std::cout << "\nVenta Total: ";
  std::cout << vta_total;
  std::cout << "\n";
}
void factura::imprimir_factura()
{
  std::cout << "\nLos datos son:";
  std::cout << "\nDescripcion: ";
  std::cout << descripcion;
  std::cout << "\nCosto: ";
  std::cout << costo;
  std::cout << "\nVenta Total: ";
  std::cout << vta_total;
  std::cout << "\nFactura: ";
  std::cout << rfc;
  std::cout << "\n";
}

int main()
{
  char caso = 0;
  do
  {
    std::cout << "\nCase a: Articulo, Case b: Venta, case c: factura, case s: Salir\n";
    std::cin >> caso;
    switch (caso)
    {
    case 'a':
    {
      leer1();
      articulo objA(descripcion, costo);
      objA.muestra();
    }
    break;

    case 'b':
    {
      leer2();
      venta objV(vta_total);
      objV.Imprimir_Datos();
    }
    break;

    case 'c':
    {
      leer3();
      factura objR(descripcion, costo, vta_total, rfc);
      objR.imprimir_factura();
    }
    break;

    case 's':
    {
      std::cout << "Saliendo...\n";
    }
    break;
    }
  } while (caso != 's');
  system("pause");
  return 0;
}
/*
█░█
▀█▀
░▀░
*/