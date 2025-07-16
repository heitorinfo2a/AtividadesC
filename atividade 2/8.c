#include <stdio.h>

int main() {
    float c, f;

    printf("Qual é a temperatura (em Celsius)?\n");
    scanf("%f", &c);

    f = c * (9.0 / 5.0) + 32;

    printf("A conversão dela para Fahrenheit: %.2f\n", f);

    return 0;
}
