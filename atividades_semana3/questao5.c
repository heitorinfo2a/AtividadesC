#include <stdio.h>

int main() {
    int valor;
    printf("Digite um numero inteiro: ");
    scanf("%d", &valor);

    if ((valor % 2 == 0 && valor % 3 != 0) || (valor % 2 != 0 && valor % 3 == 0)) {
        printf("O numero e divisivel por 2 ou por 3, mas nao pelos dois.\n");
    } else {
        printf("O numero nao atende a condicao.\n");
    }

    return 0;
}