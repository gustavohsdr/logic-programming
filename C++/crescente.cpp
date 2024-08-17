#include <iostream>

int main() {
    
    int n1, n2;

 
    while(true){
    std::cout << "Digite dois numeros: "<< std::endl;
    std::cin >> n1 >> n2;
    
    if (n1 != n2) {
        
        if ( n1 > n2) {
            std::cout << "DECRESCENTE!" << std::endl;
            
        } else {
            std::cout << "CRESCENTE!" << std::endl;
        
        }
        
    } else {
        
        break;
    } 
  
    
    }
    return 0;
}
