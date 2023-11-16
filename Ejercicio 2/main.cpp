// Ejercicio 2: Espacio de nombres repartido entre diferentes archivos Crea un programa donde defines un espacio de nombres "Geometría" en dos archivos de código separados (por ejemplo, "triángulo.cpp" y "círculo.cpp"). Cada archivo debe contener una función (por ejemplo, "calcularArea") correspondiente a la geometría específica. Finalmente, desde la función main en otro archivo, utiliza estas funciones. en c++ en clion con flujo de trabajo de cmake

#include <iostream>
#include "triangulo.h"
#include "circulo.h"

using namespace Geometria;

int main() {
    double baseTriangulo, alturaTriangulo, radioCirculo;

    // Mensaje inicial
    std::cout << "Programa compilado con exito. Presiona Enter para continuar...";
    std::cin.ignore();  // Esperar a que el usuario presione Enter

    std::cout << "Ingrese la base del triangulo: ";
    std::cin >> baseTriangulo;

    std::cout << "Ingrese la altura del triangulo: ";
    std::cin >> alturaTriangulo;

    std::cout << "Presiona Enter para calcular el area del triangulo...";
    std::cin.ignore();  // Esperar a que el usuario presione Enter
    std::cin.get();
    double areaTriangulo = calcularAreaTriangulo(baseTriangulo, alturaTriangulo);
    std::cout << "Area del triangulo: " << areaTriangulo << std::endl;

    std::cout << "Ingrese el radio del circulo: ";
    std::cin >> radioCirculo;

    std::cout << "Presiona Enter para calcular el area del circulo...";
    std::cin.ignore();  // Esperar a que el usuario presione Enter
    std::cin.get();
    double areaCirculo = calcularAreaCirculo(radioCirculo);
    std::cout << "Area del circulo: " << areaCirculo << std::endl;

    // Mensaje final
    std::cout << "Presiona Enter para salir...";
    std::cin.ignore();  // Esperar a que el usuario presione Enter

    return 0;
}
