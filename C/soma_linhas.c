#include <stdio.h>

int main() {
    
    int l, c;
    
    printf("Qual a quantidade de linhas da matriz? ");
    scanf("%d", &l);
    
    printf("Qual a quantidade de colunas da matriz? ");
    scanf("%d", &c);

    double mat[l] [c];
    
    for (int i = 0; i < l; i++) {
        printf("Digite os elementos da %da. linha: \n", i + 1);
        for (int j = 0; j < c; j++) {
            scanf("%lf", &mat[i][j]);
        }
    }
    
    printf("VETOR GERADO:\n");

    for (int i = 0; i < l; i++) {
        double somaLinha = 0.0;
        for (int j = 0; j < c; j++) {
            somaLinha += mat[i][j];
        }
        printf("%.2lf\n", somaLinha);
    }
    
    return 0;
}
