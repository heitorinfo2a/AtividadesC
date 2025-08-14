#include <stdio.h>

int main() {
    int valor;
    printf("Digite um numero inteiro: ");
    scanf("%d", &valor);

    if (valor % 2 == 0 && valor % 3 == 0) {
        printf("O numero e divisivel por 2 e por 3.\n");
    } else if (valor % 2 == 0) {
        printf("O numero e divisivel por 2, mas nao por 3.\n");
    } else if (valor % 3 == 0) {
        printf("O numero e divisivel por 3, mas nao por 2.\n");
    } else {
        printf("O numero nao e divisivel nem por 2 nem por 3.\n");
    }

    return 0;
}
