
#include "circulo.h"
#include <cmath>

namespace geometria {
    // Constructor
    Circulo::Circulo(double r) : radio(r) {}

    // Método para calcular el área del círculo
    double Circulo::calcularArea() {
        return M_PI * std::pow(radio, 2);
    }

    // Método para calcular el perímetro del círculo
    double Circulo::calcularPerimetro() {
        return 2 * M_PI * radio;
    }
}
