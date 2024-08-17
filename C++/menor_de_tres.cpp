#include <iostream>

int main() {
    
    int primeiroValor;
    int segundoValor;
    int terceiroValor;
    int menorValor = 0;
    
    std::cout<< "Primeiro valor: ";
    std::cin >> primeiroValor;
    
    std::cout << "Segundo valor: ";
    std::cin >> segundoValor;
    
    std::cout << "Terceiro valor: ";
    std::cin >> terceiroValor;
    
    
    if (primeiroValor < segundoValor && primeiroValor < terceiroValor) {
        menorValor = primeiroValor;
        
    } else if (segundoValor < terceiroValor) {
        menorValor = segundoValor;
        
    } else {
        menorValor = terceiroValor;
        
    }
    
    std::cout << "MENOR = " << menorValor << std::endl;
    
    return 0;
}
