#include <stdio.h>

int main() {
    int valor, n1, n2, n3, n4, n5;

    printf("Digite um numero de 5 digitos: ");
    scanf("%d", &valor);

    n1 = valor / 10000;
    n2 = (valor / 1000) % 10;
    n3 = (valor / 100) % 10;
    n4 = (valor / 10) % 10;
    n5 = valor % 10;

    printf("%d   %d   %d   %d   %d\n", n1, n2, n3, n4, n5);

    return 0;
}