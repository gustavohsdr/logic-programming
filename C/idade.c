#include <stdio.h>
#include <string.h>

int main() {
    
    char nome1 [50], nome2 [50];
    int idade1, idade2;
    double mediaIdade;
    
    printf("Dados da primeira pessoa: ");
    printf("\nNome: ");
    fgets(nome1, sizeof(nome1), stdin);
    nome1[strcspn(nome1, "\n")] = 0;

  
    printf("Idade: ");
    scanf("%d", &idade1);
    getchar();
    
    printf("Dados da segunda pessoa: ");
    printf("\nNome: ");
    fgets(nome2, sizeof(nome2), stdin);
    nome2[strcspn(nome2, "\n")] = 0;
    
    printf("Idade: ");
    scanf("%d", &idade2);
    
    mediaIdade = (double)(idade1 + idade2) / 2;
    
    printf("A idade média de %s e %s é de %.1lf anos.",nome1,nome2,mediaIdade);
    
    return 0;
    
}
