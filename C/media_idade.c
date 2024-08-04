#include <stdio.h>

int main() {
    
    int idade;
    double mediaIdade;
    int contador = 0, somaIdade = 0;
    
    printf("Digite as idades: \n");
    
    while (1) {
        scanf("%d", &idade);
        
        if (idade < 0) {
            break;
        }
        
        somaIdade += idade;
        contador ++;
    }
        
        if (contador == 0) {
            printf("IMPOSSIVEL CALCULAR \n");
        } else {
            mediaIdade = (double) somaIdade / contador;
            printf("Idade media: %.2lf\n", mediaIdade);

            
        }
 
    return 0;
}
