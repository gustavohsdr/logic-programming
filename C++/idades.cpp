#include <iomanip>
#include <iostream>
#include <climits>

using namespace std;

int main() {
    
    string primeiroNome, segundoNome;
    int primeiraIdade, segundaIdade;
    double mediaIdade;
    
    
    cout<<"Dados da primeira pessoa:" << endl;
    
    cout<<"Nome: ";
    getline(cin, primeiroNome);
    
    cout<< "Idade: " ;
    cin >> primeiraIdade;
    
    cout<< "Nome: ";
    cin.ignore(INT_MAX, '\n');
    getline(cin, segundoNome);
    cout<< "Idade: " ;
    cin >> segundaIdade;
    
    mediaIdade = double(primeiraIdade + segundaIdade) / 2;
 
    cout << fixed << setprecision(1);
    cout << "A idade média de " << primeiroNome << "e " << segundoNome
    << " é de " << mediaIdade << " anos.";
    
    
    return 0;

}
