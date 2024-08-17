#include <iostream>

int main() { 
    
    int n1, n2;
    int somaImpar = 0;
    
    std::cout << "Digite dois numeros: " << std::endl;
    std::cin >> n1 >> n2;
    
    if (n1 < n2 ) {
        for ( int i = n1 + 1; i < n2; i++ ) {
            if ( i % 2 != 0) {
                somaImpar += i;
            }
        }
        
    } else {
         for ( int i = n2 + 1 ; i < n1; i++ ) {
            if ( i % 2 != 0) {
                somaImpar += i;
            }
        }
    }

    std::cout << "SOMA DOS IMPARES = " << somaImpar << std::endl;
    
    return 0;
}
