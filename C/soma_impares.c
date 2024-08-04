#include <stdio.h>

int main() {
    
    int x, y, i, soma;
    
    printf("Digite dois numeros: \n");
    scanf("%d", &x);
    scanf("%d", &y);
    
    if (x < y) {
        
        for (i = x + 1; i < y; i ++) {
            
            if (i % 2 != 0) {
                soma = soma + i;
            }
        }
        
    } else {
        
        for (i = y + 1; i < x; i ++) {
            
            if (i % 2 != 0) {
                soma = soma + i;
            }
        }
    }
    
    printf("SOMA DOS IMPARES = %d", soma );
    
    return 0;
}
