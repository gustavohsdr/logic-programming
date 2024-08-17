#include <iostream>
#include <string>
#include <iomanip>
#include <vector>

int main() {
    
    int N;
    
    std::cout<<"Quantas pessoas serao digitadas? ";
    std::cin >> N;
    std::cin.ignore(); 
    
    std::vector<std::string> nome(N);
    std::vector<int> idade(N);
    std::vector<double> altura(N);
    
    for (int i = 0; i < N; i++ ) {
        std::cout << "Dados da " << i + 1 << "a pessoa:" << std::endl;
        std::cout << "Nome: ";
        std::getline(std::cin, nome[i]); 
        std::cout << "Idade: ";
        std::cin >> idade[i];
        std::cout << "Altura: ";
        std::cin >> altura[i];
        std::cin.ignore();      
        
    }
    
    double somaAltura = 0;
    double mediaAltura = 0;
    double porcentagem;
    double contador = 0;
    
      for (int i = 0; i < N; i++) {
          somaAltura += altura[i];
          mediaAltura = somaAltura / N;
          
          if (idade[i] < 16) {
              contador += 1;
              porcentagem = ((double)contador / N) * 100;
          }
      }
      
      std::cout << std::fixed << std::setprecision(2);
      std::cout << "\nAltura Média: " << mediaAltura << std::endl;
      std::cout << "Pessoas com menos de 16 anos: " << porcentagem << "%" << std::endl;
      
    for (int i = 0; i < N; i++) {
        if (idade[i] < 16) {
            std::cout << nome[i] << std::endl;
        }
    }
    

    return 0;
}


