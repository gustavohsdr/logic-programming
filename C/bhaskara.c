int main() {
    
    double a, b, c; 
    double delta, x1,x2;
    
    printf("Coeficiente A: ");
    scanf("%lf", &a);
    
    printf("Coeficiente B: ");
    scanf("%lf", &b);
    
    printf("Coeficiente C: ");
    scanf("%lf", &c);
    
    delta = pow(b,2) - (4 * a * c);
    
    if (delta < 0) {
        printf("Esta equacao nao possui raizes reais");
    } else if (delta == 0) {
        x1 = -b / (2*a);
        printf("A equação possui uma raiz real: x = %.2lf\n", x1);
    } else {
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);
        printf("X1 = %.4lf\n", x1);
        printf("x2 = %.4lf", x2);
    }

    
    
    return 0;
}
