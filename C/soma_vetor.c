#include <stdio.h>

int main() {
    
    double soma = 0, media = 0;
    int n, i;
    
    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);
    
    double vet[n];
    
    for (i = 0; i < n; i++) {
        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);
    }
    
    printf("VALORES =  ");
    for (i = 0; i < n; i++){
        soma = (soma + vet[i]);
        media = (soma / n);
        printf("%.1lf ", vet[i]);
    
    }
    
    printf("\nSOMA = %.1lf", soma);
    printf("\nMEDIA = %.1lf", media);
    
    return 0;
}
