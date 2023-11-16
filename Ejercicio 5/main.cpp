#include <iostream>
#include <vector>
#include <map>
#include <set>

namespace MisContenedores {
    void usarVector() {
        // Código para usar el vector
        std::vector<int> miVector;
        miVector.push_back(1);
        miVector.push_back(2);
        miVector.push_back(3);

        std::cout << "Presione Intro para ver el resultado del vector...";

        std::cin.get();    // Esperar hasta que se presione Intro

        std::cout << "Vector:";
        for (const auto& elemento : miVector) {
            std::cout << " " << elemento;
        }
        std::cout << std::endl;
    }

    void usarMap() {
        // Código para usar el map
        std::map<std::string, int> miMap;
        miMap["Uno"] = 1;
        miMap["Dos"] = 2;
        miMap["Tres"] = 3;

        std::cout << "Presione Intro para ver el resultado del map...";

        std::cin.get();    // Esperar hasta que se presione Intro

        std::cout << "Map:";
        for (const auto& par : miMap) {
            std::cout << " [" << par.first << ", " << par.second << "]";
        }
        std::cout << std::endl;
    }

    void usarSet() {
        // Código para usar el set
        std::set<int> miSet;
        miSet.insert(3);
        miSet.insert(1);
        miSet.insert(2);

        std::cout << "Presione Intro para ver el resultado del set...";

        std::cin.get();    // Esperar hasta que se presione Intro

        std::cout << "Set:";
        for (const auto& elemento : miSet) {
            std::cout << " " << elemento;
        }
        std::cout << std::endl;
    }
}

int main() {
    // Uso de los contenedores
    MisContenedores::usarVector();
    MisContenedores::usarMap();
    MisContenedores::usarSet();

    return 0;
}
