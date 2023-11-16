#include <iostream>
#include "ciencia.cpp"

int main() {
    // Utilizando la constante y la función desde el espacio de nombres Ciencia::Fisica
    std::cout << "Presione Intro para ver el resultado de la energía...";

    std::cin.get();    // Esperar hasta que se presione Intro

    std::cout << "Energía: " << Ciencia::Fisica::calcularEnergia(10) << " Joules" << std::endl;

    return 0;
}

