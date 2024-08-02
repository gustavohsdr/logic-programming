#include <stdio.h>

int main() {
    
    int numero1, numero2, numero3, menorValor;
    
    printf("Primeiro Valor: ");
    scanf("%d", &numero1);
    
    printf("Segundo Valor: ");
    scanf("%d", &numero2);
    
    printf("Terceira Valor: ");
    scanf("%d", &numero3);
    
    menorValor = numero1;
    
    if (numero2 < menorValor) {
        menorValor = numero2;
    } 
    
    if (numero3 < menorValor) {
        menorValor = numero3;
    }
    
    printf("MENOR = %d", menorValor);
    
    
    return 0;
}
