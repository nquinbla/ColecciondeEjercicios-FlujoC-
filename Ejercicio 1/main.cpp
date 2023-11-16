#include <iostream>
#include <cmath> // Para la función sqrt

// Definición del espacio de nombres
namespace Matematicas {
    // Funciones de operaciones matemáticas
    double suma(double a, double b) {
        return a + b;
    }

    double resta(double a, double b) {
        return a - b;
    }

    double multiplicacion(double a, double b) {
        return a * b;
    }

    double division(double a, double b) {
        if (b != 0) {
            return a / b;
        } else {
            std::cerr << "Error: División por cero" << std::endl;
            return 0.0; // Manejar el caso de división por cero
        }
    }

    double raizCuadrada(double a) {
        if (a >= 0) {
            return sqrt(a);
        } else {
            std::cerr << "Error: No se puede calcular la raíz cuadrada de un número negativo" << std::endl;
            return 0.0; // Manejar el caso de raíz cuadrada de un número negativo
        }
    }
}

int main() {
    // Uso de las funciones del espacio de nombres Matematicas
    double num1, num2;

    std::cout << "Ingrese el primer número: ";
    std::cin >> num1;

    std::cout << "Ingrese el segundo número: ";
    std::cin >> num2;

    std::cout << "Presione Intro para ver el resultado de la suma...";
    std::cin.ignore(); // Ignorar el carácter Intro previo
    std::cin.get();    // Esperar hasta que se presione Intro
    std::cout << "Suma: " << Matematicas::suma(num1, num2) << std::endl;

    std::cout << "Presione Intro para ver el resultado de la resta...";

    std::cin.get();    // Esperar hasta que se presione Intro
    std::cout << "Resta: " << Matematicas::resta(num1, num2) << std::endl;

    std::cout << "Presione Intro para ver el resultado de la multiplicación...";

    std::cin.get();    // Esperar hasta que se presione Intro
    std::cout << "Multiplicación: " << Matematicas::multiplicacion(num1, num2) << std::endl;

    std::cout << "Presione Intro para ver el resultado de la división...";

    std::cin.get();    // Esperar hasta que se presione Intro

    if (num2 != 0) {
        std::cout << "División: " << Matematicas::division(num1, num2) << std::endl;
    } else {
        std::cerr << "No se puede realizar la división porque el segundo número es cero." << std::endl;
    }

    std::cout << "Presione Intro para ver el resultado de la raíz cuadrada...";

    std::cin.get();    // Esperar hasta que se presione Intro

    if (num1 >= 0) {
        std::cout << "Raíz cuadrada de " << num1 << ": " << Matematicas::raizCuadrada(num1) << std::endl;
    } else {
        std::cerr << "No se puede calcular la raíz cuadrada de un número negativo." << std::endl;
    }

    return 0;
}
