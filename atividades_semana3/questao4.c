#include <stdio.h>

int main() {
    int opcao;
    float num1, num2, resultado;
    char continuar;

    do {
        // Exibe o menu
        printf("=== MENU DE OPERACOES ===\n");
        printf("1 - Adicao\n");
        printf("2 - Subtracao\n");
        printf("3 - Multiplicacao\n");
        printf("4 - Divisao\n");
        printf("=========================\n");
        
        printf("Escolha uma opcao (1 a 4): ");
        if (scanf("%d", &opcao) != 1) {
            printf("Opcao invalida.\n");
            while(getchar() != '\n');  // Limpa o buffer de entrada
            continue;
        }
        
        // Verifica se a opção é válida
        if (opcao >= 1 && opcao <= 4) {
            printf("Digite o primeiro numero: ");
            if (scanf("%f", &num1) != 1) {
                printf("Numero invalido.\n");
                while(getchar() != '\n');
                continue;
            }
            
            printf("Digite o segundo numero: ");
            if (scanf("%f", &num2) != 1) {
                printf("Numero invalido.\n");
                while(getchar() != '\n');
                continue;
            }
            
            // Realiza a operação conforme a escolha do usuário
            switch(opcao) {
                case 1:
                    resultado = num1 + num2;
                    printf("Resultado: %.2f\n", resultado);
                    break;
                case 2:
                    resultado = num1 - num2;
                    printf("Resultado: %.2f\n", resultado);
                    break;
                case 3:
                    resultado = num1 * num2;
                    printf("Resultado: %.2f\n", resultado);
                    break;
                case 4:
                    if (num2 == 0) {
                        printf("Erro: divisao por zero!\n");
                    } else {
                        resultado = num1 / num2;
                        printf("Resultado: %.2f\n", resultado);
                    }
                    break;
                default:
                    printf("Opcao invalida.\n");
            }
        } else {
            printf("Opcao invalida.\n");
        }

        // Pergunta ao usuário se ele deseja continuar
        printf("Deseja realizar outra operacao? (s/n): ");
        scanf(" %c", &continuar);
        
    } while (continuar == 's' || continuar == 'S');

    printf("Programa encerrado.\n");

    return 0;
}
