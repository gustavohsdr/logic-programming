#include <stdio.h>

int main()
{
    int tabuada, i, somaTotal;
    
    printf("Deseja a tabuada para qual valor? ");
    scanf("%d", &tabuada);
    
    for (i = 0; i <= 10; i++) {
        somaTotal = tabuada * i;
        printf("\n%d x %d = %d", tabuada, i, somaTotal);
        
    }
    return 0;
}
