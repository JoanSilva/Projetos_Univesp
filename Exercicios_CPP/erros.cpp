#include <iostream>
#include <stdexcept>

int main() {
    int numerador = 10;
    int denominador = 0;
    int resultado;

    try {
        std::cout << "Tentando ligar o circuito..." << std::endl;
        
        if (denominador == 0) {
            throw std::runtime_error("CURTO-CIRCUITO: Divisao por zero!");
        }
        resultado = numerador / denominador;
        std::cout << "Resultado: " << resultado << std::endl;
    } 
    catch (const std::runtime_error& e) {
        std::cout << ">> DISJUNTOR DESARMOU! <<" << std::endl;
        std::cout << "Erro capturado: " << e.what() << std::endl;
    }
