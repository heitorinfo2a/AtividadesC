#include <stdio.h>

int main() {
    short anos;
    int valorDep;
    long numConta;

    printf("Digite sua idade (short): ");
    scanf("%hd", &anos);

    printf("Digite o valor a depositar (int): ");
    scanf("%d", &valorDep);

    printf("Digite o numero da conta (long): ");
    scanf("%ld", &numConta);

    printf("Idade: %hd\n", anos);
    printf("Deposito: %d\n", valorDep);
    printf("Conta: %ld\n", numConta);

    return 0;
}