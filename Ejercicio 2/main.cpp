// Ejercicio 2: Espacio de nombres repartido entre diferentes archivos Crea un programa donde defines un espacio de nombres "Geometría" en dos archivos de código separados (por ejemplo, "triángulo.cpp" y "círculo.cpp"). Cada archivo debe contener una función (por ejemplo, "calcularArea") correspondiente a la geometría específica. Finalmente, desde la función main en otro archivo, utiliza estas funciones. en c++ en clion con flujo de trabajo de cmake


#include <iostream>
#include "triangulo.h"
#include "circulo.h"

using namespace std;

int main() {
    double base, altura, radio;

    cout << "Introduce la base del triangulo: ";
    cin >> base;

    cout << "Introduce la altura del triangulo: ";
    cin >> altura;

    cout << "Introduce el radio del circulo: ";
    cin >> radio;

    double areaTriangulo = Geometria::calcularAreaTriangulo(base, altura);
    double areaCirculo = Geometria::calcularAreaCirculo(radio);

    cout << "El area del triangulo es: " << areaTriangulo << endl;
    cout << "El area del circulo es: " << areaCirculo << endl;

    return 0;
}
