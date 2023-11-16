
// fisica.cpp

#include "ciencia.cpp"

namespace Ciencia {
    namespace Fisica {
        double calcularEnergia(double masa) {
            return masa * velocidadLuz * velocidadLuz;
        }
    }
}