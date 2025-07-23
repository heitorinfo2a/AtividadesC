#include <stdio.h>

int main() {
    int numero;
    printf("Informe um numero para saber se ele é par ou impar:\n");
    scanf("%d", &numero);
    
    if (numero % 2 == 0) {
        printf("O numero %d é par.\n", numero);
    } else {
        printf("O numero %d é impar.\n", numero);
    }
    
    return 0;
}
