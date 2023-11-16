
#ifndef EJERCICIO_3_CIRCULO_H
#define EJERCICIO_3_CIRCULO_H

namespace geometria {
    class Circulo {
    private:
        double radio;
    public:
        Circulo(double r);
        double calcularArea();
        double calcularPerimetro();

    };
}


#endif //EJERCICIO_3_CIRCULO_H
