// main.cpp
#include <iostream>
#include "circulo.h"

using namespace geometria;

int main() {
    // Solicitar al usuario el radio del círculo
    double radio;
    std::cout << "Ingrese el radio del circulo: ";
    std::cin >> radio;

    // Crear un objeto de la clase Circulo
    Circulo miCirculo(radio);

    // Calcular y mostrar el área del círculo
    std::cout << "Presiona Enter para calcular el area del circulo...";
    std::cin.ignore();
    std::cin.get();
    double area = miCirculo.calcularArea();
    std::cout << "Area del circulo: " << area << std::endl;

    // Calcular y mostrar el perímetro del círculo
    std::cout << "Presiona Enter para calcular el perimetro del circulo...";
    std::cin.ignore();
    std::cin.get();
    double perimetro = miCirculo.calcularPerimetro();
    std::cout << "Perimetro del circulo: " << perimetro << std::endl;

    return 0;
}
