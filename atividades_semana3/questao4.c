#include <stdio.h>

int main() {
    int escolha;
    float numA, numB;

    printf("Escolha a operacao:\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("Opcao: ");
    scanf("%d", &escolha);

    printf("Digite o primeiro valor: ");
    scanf("%f", &numA);
    printf("Digite o segundo valor: ");
    scanf("%f", &numB);

    if (escolha == 1) {
        printf("Resultado: %.2f\n", numA + numB);
    }
    else if (escolha == 2) {
        printf("Resultado: %.2f\n", numA - numB);
    }
    else if (escolha == 3) {
        printf("Resultado: %.2f\n", numA * numB);
    }
    else if (escolha == 4) {
        if (numB != 0)
            printf("Resultado: %.2f\n", numA / numB);
        else
            printf("Erro: divisao por zero!\n");
    }
    else {
        printf("Opcao invalida!\n");
    }

    return 0;
}
