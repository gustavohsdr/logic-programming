#include <stdio.h>

int main() {
    
    int numero1, numero2;
    
    while (1) {
        printf("Digite dois numeros: ");
        scanf("%d", &numero1);
        scanf("%d", &numero2);
        
        
        if (numero1 == numero2) {
            printf("Valores iguais encerra o programa");
        }
        
         if (numero1 < numero2) {
            printf("Ordem crescente\n");
        } else {
            printf("Ordem decrescente\n");
        }
    
        
    }

    return 0;
}
