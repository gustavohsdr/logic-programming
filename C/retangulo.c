#include <stdio.h>
#include <math.h>

int main() {
    
    double baseRetangulo, alturaRetangulo, area, perimetro, diagonal;
    
    printf("Base do retangulo: ");
    scanf("%lf", &baseRetangulo);
    
    printf("Altura do retangulo ");
    scanf("%lf", &alturaRetangulo);
    
    area = (baseRetangulo * alturaRetangulo);
    perimetro = ( 2 * (baseRetangulo + alturaRetangulo));
    diagonal = pow(baseRetangulo, 2) + pow(alturaRetangulo, 2);
    diagonal = sqrt(diagonal); 
    
    printf("AREA = %.4lf\n", area);
    printf("PERIMETRO = %.4lf\n", perimetro);
    printf("DIAGONAL = %.4lf", diagonal);
    
    return 0;
}
