int main() {
    
    int N;
    
    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &N);
    getchar();
    
    char nome [N] [50];
    int idade [N];
    double altura [N];
    
    
    int vet[N];
    
    for (int i = 0; i < N; i++) {
        printf("Dados da %da pessoa:\n", i + 1); 
        
        printf("Nome: ");
        fgets(nome[i], sizeof(nome[i]), stdin);
        
        printf("Idade: ");
        scanf("%d", &idade[i]);
        getchar();
        
        printf("Altura: ");
        scanf("%lf", &altura[i]);
        getchar();
        
    }
    printf("\n");
    
    double somaAltura = 0;
    double mediaAltura = 0; 
    int contador = 0;
    double porcentagem;
    
    
    for (int i = 0; i < N; i++) {
        somaAltura += altura[i];
        mediaAltura = (double) somaAltura / N;
        
        if (idade[i] < 16) {
            contador += 1;
            porcentagem = ((double)contador / N) * 100;
            
            
        }
    }
    
    printf("Altura Média: %.2lf\n", mediaAltura);
    printf("Pessoas com menos de 16 anos: %.1lf%%\n", porcentagem);
    
    for (int i = 0; i < N; i++) {
        if (idade[i] < 16) {
            printf("%s", nome[i]);
        }
    }
    
    return 0;
}
