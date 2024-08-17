#include <iostream>
#include <cmath>
#include <iomanip>

int main()
{
    
    double baseRet;
    double altRet;
    double area;
    double perimetro;
    double diagonal;
    
    
    std::cout << "Base do retangulo: ";
    std::cin >> baseRet;
    
    std::cout << "Altura do retangulo: ";
    std::cin >> altRet;
    
    area = (baseRet * altRet);
    perimetro = (2 * (baseRet + altRet));
    diagonal = sqrt(pow (baseRet, 2) + pow(altRet, 2));
    
    std::cout << std::fixed << std::setprecision(4);
    std::cout << "Área: " << area << std::endl;
    std::cout << "Perímetro: " << perimetro << std::endl;
    std::cout << "Diagonal: " << diagonal << std::endl;
    
    return 0;
}
