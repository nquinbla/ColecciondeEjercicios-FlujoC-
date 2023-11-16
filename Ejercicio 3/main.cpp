// main.cpp
#include <iostream>
#include "circulo.h"

using namespace geometria;

int main() {
    // Solicitar al usuario el radio del círculo
    double radio;
    std::cout << "Ingrese el radio del círculo: ";
    std::cin >> radio;

    // Crear un objeto de la clase Circulo
    Circulo miCirculo(radio);

    // Calcular y mostrar el área del círculo
    double area = miCirculo.calcularArea();
    std::cout << "Área del círculo: " << area << std::endl;

    // Calcular y mostrar el perímetro del círculo
    double perimetro = miCirculo.calcularPerimetro();
    std::cout << "Perímetro del círculo: " << perimetro << std::endl;

    return 0;
}
