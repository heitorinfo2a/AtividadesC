#include <stdio.h>
#include <math.h>

int main() {
    float d, A, C;

    printf("Qual é o raio da sua circunferência?\n");
    scanf("%f", &d);

    A = M_PI * pow(d, 2);
    C = 2 * M_PI * d;

    printf("Área: %.2f\n", A);
    printf("Comprimento: %.2f\n", C);

    return 0;
}
